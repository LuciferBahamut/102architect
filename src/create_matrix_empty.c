/*
** EPITECH PROJECT, 2019
** create matrix empty
** File description:
** 102 arch
*/

#include "my.h"

float **create_matrix_e(void)
{
    float **r = malloc(3 * sizeof (float *));

    r[0] = malloc(3);
    r[1] = malloc(3);
    r[2] = malloc(3);
    r[0][0] = 1;
    r[0][1] = 0;
    r[0][2] = 0;
    r[1][0] = 0;
    r[1][1] = 1;
    r[1][2] = 0;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}
