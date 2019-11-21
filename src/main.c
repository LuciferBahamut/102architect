/*
** EPITECH PROJECT, 2019
** main
** File description:
** 102architect
*/

#include "my.h"

float **matrix_create(char **str, int i)
{
    float **r = malloc((3 + 1) * sizeof (float *));
    float a;
    float b;

    *r = malloc(3 + 1);
    if (str[i][0] == '-' && str[i][1] == 't') {
        a = atof(str[i + 1]);
        b = atof(str[i + 2]);
        printf("Tranlation along vector (%d, %d)\n", a, b);
        matrixgest(r, a, b, 1);
    }
    if (str[i][0] == '-' && str[i][1] == 'z') {
        a = atof(str[i + 1]);
        b = atof(str[i + 2]);
        printf("Scaling by factor %a and %b\n", a, b);
        matrixgest(r, a, b, 2);
    }
    if (str[i][0] == '-' && str[i][1] == 'r') {
        a = atof(str[i + 1]);
        printf("Rotation by a %a degree angle\n", a);
        matrixgest(r, a, b, 3);
    }
    if (str[i][0] == '-' && str[i][1] == 's') {
        a = atof(str[i + 1]);
        printf("Reflection over an axis with an"); 
        printf("inclinaison angle of %d degrees\n", a);
        matrixgest(r, a, b, 4);
    }
    return (r);
}

void print_matrixresult(float **r)
{
    printf("%2f\t%2f\t%2f\n", r[0][0], r[0][1], r[0][2]);
    printf("%2f\t%2f\t%2f\n", r[1][0], r[1][1], r[1][2]);
    printf("%2f\t%2f\t%2f\n", r[2][0], r[2][0], r[2][2]);
}

void matrix_calc(char **str , int size)
{
    float a = atof(str[0]);
    float b = atof(str[1]);
    float **r = matrix_create(str, 2);
    float **s;

    for (int i = 3; i < size; i++) {
        if (str[i][0] == '-' && (str[i][1] == 't' || str[i][1] == 'z'
                                 || str[i][1] == 'r' || str[i][1] == 's')) {
            s = matrix_create(str, i);
            r = mult_architech(r, s);
        }
        i++;
    }
    print_matrixresult(r);
    final_architech(r, a, b);
}

int main(int ac, char **av)
{
//    if (error_handling(ac, av) == 84)
//        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
    av++;
    matrix_calc(av, ac);
    return (0);
}
