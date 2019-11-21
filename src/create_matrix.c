/*
** EPITECH PROJECT, 2019
** create matrix
** File description:
** 102arc
*/

#include "my.h"

float **matrixflagt(float **r, float a, float b)
{
    r[0][0] = 1;
    r[0][1] = 0;
    r[0][2] = a;
    r[1][0] = 0;
    r[1][1] = 1;
    r[1][2] = b;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}

float **matrixflagz(float **r, float a, float b)
{
    r[0][0] = a;
    r[0][1] = 0;
    r[0][2] = 0;
    r[1][0] = 0;
    r[1][1] = b;
    r[1][2] = 0;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}

float **matrixflagr(float **r, float a)
{
    r[0][0] = cos(a);
    r[0][1] = -sin(a);
    r[0][2] = 0;
    r[1][0] = sin(a);
    r[1][1] = cos(a);
    r[1][2] = 0;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}

float **matrixflags(float **r, float a)
{
    r[0][0] = cos(2 * a);
    r[0][1] = sin(2 * a);
    r[0][2] = 0;
    r[1][0] = sin(2 * a);
    r[1][1] = -cos(2 * a);
    r[1][2] = 0;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}

float **matrixgest(float **r, float a, float b, int f)
{
    switch (f) {
    case 1 : matrixflagt(r, a, b);
        break;
    case 2 : matrixflagz(r, a, b);
        break;
    case 3 : matrixflagr(r, a);
        break;
    case 4 : matrixflags(r, a);
        break;
    }
    return (r);
}
