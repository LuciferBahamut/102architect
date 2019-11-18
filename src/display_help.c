/*
** EPITECH PROJECT, 2019
** display help
** File description:
** 102pong
*/

#include "my.h"

void display_help(void)
{
    printf("USAGE\n");
    printf("    ./102architect x y transfo1 arg11");
    printf("[arg12] [transfo2 arg12 [arg22]] ...\n");
    printf("\nDESCRIPTION\n");
    printf("    x\tabscissa of the original point\n");
    printf("    y\tordinate of the original point\n");
    printf("\n\n    transfo arg1 [arg2]\n");
    printf("    -t i j  translation along vector(i, j)\n");
    printf("    -z m n  scaling by factors m (w-axis) and n (y-axis)\n");
    printf("    -r d    rotation centered in O by a d degree angle\n");
    printf("    -s d    reflection over the axis passing through O with an inclination\n");
    printf("\t    angle of d degrees\n");
}
