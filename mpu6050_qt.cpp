#include "mpu6050_qt.h"
#include "math.h"

void initMPU(_sMPU *dataStruct){
    // Inicializacion de los datos de Aceleracion y Giro
    dataStruct->Ax = 0; dataStruct->Ay = 0; dataStruct->Az = 0;
    dataStruct->Gx = 0; dataStruct->Gy = 0; dataStruct->Gz = 0;

    // Inicializacion de los datos de Velocidad y Posicion
    dataStruct->Px = 0; dataStruct->Py = 0; dataStruct->Pz = 0;

    // Inicializacion de los coeficientes de filtros digitales complementarios
    dataStruct->A_alpha = 0.65; dataStruct->G_alpha = 0.95;
}

void decodeMPUdata(uint8_t *bufData, uint8_t offset, _sMPU *dataStruct){
    // Obtencion de datos crudos desde el MPU6050: Acelerometro
    dataStruct->rawAx = (bufData[1+offset] << 8 | bufData[0+offset]);
    dataStruct->rawAy = (bufData[3+offset] << 8 | bufData[2+offset]);
    dataStruct->rawAz = (bufData[5+offset] << 8 | bufData[4+offset]);

    // Obtencion de datos crudos desde el MPU6050: Giroscopio
    dataStruct->rawGx = (bufData[7+offset] << 8 | bufData[6+offset]);
    dataStruct->rawGy = (bufData[9+offset] << 8 | bufData[8+offset]);
    dataStruct->rawGz = (bufData[11+offset] << 8 | bufData[10+offset]);

    // Procesamiento de los datos: Aceleracion a m/s2
    if (abs(dataStruct->rawAx) > 250)
        dataStruct->Ax = filterData(dataStruct->Ax, (dataStruct->rawAx/16384.0)*9.81, dataStruct->A_alpha);
    else
        dataStruct->Ax = 0;

    if (abs(dataStruct->rawAy) > 250)
        dataStruct->Ay = filterData(dataStruct->Ay, (-dataStruct->rawAy/16384.0)*9.81, dataStruct->A_alpha);
    else
        dataStruct->Ay = 0;

    dataStruct->Az = filterData(dataStruct->Az, (dataStruct->rawAz/16384.0)*9.81, dataStruct->A_alpha);

    // Procesamiento de los datos: Giro a deg/s
    dataStruct->Gx = filterData(dataStruct->Gx, (dataStruct->rawGx/131.0), dataStruct->G_alpha);
    dataStruct->Gy = filterData(dataStruct->Gy, (dataStruct->rawGy/131.0), dataStruct->G_alpha);
    dataStruct->Gz = filterData(dataStruct->Gz, (dataStruct->rawGz/131.0), dataStruct->G_alpha);
}

void getYPR(_sMPU *dataStruct, double dt){
    // Obtencion de angulos de giro en los ejes X e Y
    double acc_X_ang = atan2(dataStruct->Ay, sqrt(pow(dataStruct->Ax, 2.0)+pow(dataStruct->Az, 2.0))) * RAD_TO_DEG;
    double acc_Y_ang = atan2(-dataStruct->Ax, sqrt(pow(dataStruct->Ay, 2.0)+pow(dataStruct->Az, 2.0))) * RAD_TO_DEG;

    // Obtencion del YAW
    if (dataStruct->Gz > 0.15 || dataStruct->Gz < -0.15)
        dataStruct->Yaw += dataStruct->Gz * dt;
    // Obtencion del PITCH
    if (dataStruct->Gy > 0.05 || dataStruct->Gy < -0.05)
        dataStruct->Pitch = filterData(acc_Y_ang, dataStruct->Pitch + dataStruct->Gy * dt, dataStruct->G_alpha);
    // Obtencion del ROLL
    if (dataStruct->Gx > 0.05 || dataStruct->Gx < -0.05){
        dataStruct->Roll = filterData(acc_X_ang, dataStruct->Roll + dataStruct->Gx * dt, dataStruct->G_alpha);
    }

    if (dataStruct->Yaw > 360)
        dataStruct->Yaw = 0;
    else if (dataStruct->Yaw < -360)
        dataStruct->Yaw = 0;
}

void getRPY(_sMPU *dataStruct, double Ax, double Ay, double Az, double Gx, double Gy, double Gz, double dt){
    // Obtencion de angulos de giro en los ejes X e Y
    double acc_X_ang = atan2(Ay, sqrt(pow(Ax, 2.0)+pow(Az, 2.0))) * RAD_TO_DEG;
    double acc_Y_ang = atan2(-Ax, sqrt(pow(Ay, 2.0)+pow(Az, 2.0))) * RAD_TO_DEG;

    // Obtencion del YAW
    if (Gz > 0.15 || Gz < -0.15){
        dataStruct->Yaw += Gz * dt;
    }
    // Obtencion del PITCH
    if (Gy > 0.075 || Gy < -0.075)
        dataStruct->Pitch = filterData(acc_Y_ang, dataStruct->Pitch + Gy * dt, dataStruct->G_alpha);
    // Obtencion del ROLL
    if (Gx > 0.075 || Gx < -0.075){
        dataStruct->Roll = filterData(acc_X_ang, dataStruct->Roll + Gx * dt, dataStruct->G_alpha);
    }

    if (dataStruct->Yaw >= 360 || dataStruct->Yaw <= -360)
        dataStruct->Yaw = 0.0;
}

void getVelocityMPU(_sMPU *dataStruct, double dt){
    if (abs(dataStruct->Ax) > 0.1)
        dataStruct->Vx += dataStruct->Ax * dt;
    else
        dataStruct->Vx *= 0.2;

    if (abs(dataStruct->Ay) > 0.1)
        dataStruct->Vy += dataStruct->Ay * dt;
    else
        dataStruct->Vy *= 0.2;

    dataStruct->Vz = 0.0;
}

void getPositionMPU(_sMPU *dataStruct, double dt){
    if (abs(dataStruct->Vx) > 0.05)
        dataStruct->Px += dataStruct->Vx * dt * 100;//+(1/2 * dataStruct->Ax * dt * dt);
    else{
        dataStruct->Px = ceil(dataStruct->Px);
        dataStruct->Vx = 0;
    }
    if (abs(dataStruct->Vy) > 0.05)
        dataStruct->Py += dataStruct->Vy * dt * 100;//+(1/2 * dataStruct->Ay * dt * dt);
    else{
        dataStruct->Py = ceil(dataStruct->Py);
        dataStruct->Vy = 0;
    }
    dataStruct->Pz = 0.0;
}

double filterData(double value, double data, double alpha){
    return (data*alpha + (1-alpha)*value);
}

double filter_FMM(_sFMM *filter, double data){
    if (filter->index == SIZE_BUF_FMM){
        filter->value = (filter->sum / SIZE_BUF_FMM);
        filter->index = 0;
        filter->sum = 0;
    }else{
        filter->sum += data;
        filter->index++;
    }
    return filter->value;
}
