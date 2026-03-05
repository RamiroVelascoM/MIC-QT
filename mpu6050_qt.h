#ifndef MPU6050_QT_H
#define MPU6050_QT_H

#include <cstdint>

#define RAD_TO_DEG      57.29578
#define SIZE_BUF_FMM    10

// ESTRUCTURA DEL ACELEROMETRO Y GIROSCOPIO MPU6050
typedef struct{
    int16_t rawAx;
    int16_t rawAy;
    int16_t rawAz;
    int16_t rawGx;
    int16_t rawGy;
    int16_t rawGz;

    double Ax;
    double Ay;
    double Az;

    double Vx;
    double Vy;
    double Vz;

    double Px;
    double Py;
    double Pz;

    double Gx;
    double Gy;
    double Gz;
    double Yaw;
    double Pitch;
    double Roll;

    double A_alpha;
    double G_alpha;
}_sMPU;

typedef struct{
    uint8_t index;
    double sum;
    double value;
}_sFMM;

void initMPU(_sMPU *dataStruct);

void decodeMPUdata(uint8_t *bufData, uint8_t offset, _sMPU *dataStruct);

void getYPR(_sMPU *dataStruct, double dt);

void getRPY(_sMPU *dataStruct, double Ax, double Ay, double Az, double Gx, double Gy, double Gz, double dt);

void getVelocityMPU(_sMPU *dataStruct, double dt);

void getPositionMPU(_sMPU *dataStruct, double dt);

double filterData(double value, double data, double alpha);

double filter_FMM(_sFMM *filter, double data);

#endif // MPU6050_QT_H
