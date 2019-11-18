/*
** EPITECH PROJECT, 2019
** architect
** File description:
** arch
*/

#include "my.h"

float **mult_architech(float **f, float **m)
{
    float r[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            r[i][j] = (f[i][0] * m[0][j]) + (f[i][1] * m[1][j]) + (f[i][2] * m[2][j]);
        }
    }
    return (r);
}

float **final_architech(float **f, float a, float b)
{
    float r[2];

    r[0] = (f[0][0] * a) + (f[0][1] * b) + (f[0][2] * 1);
    r[1] = (f[1][0] * a) + (f[1][1] * b) + (f[1][2] * 1);
    return (r);
}