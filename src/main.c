/*
** EPITECH PROJECT, 2019
** main
** File description:
** 102architect
*/

#include "my.h"

float **matrix_create(char c, float i, float j)
{
    float r[3][3];
    switch (c) {
        case 't' : r = {{1, 0, i}, {0, 1, j}, {0, 0, 1}};
            break;
        case 'z' : r = {{i, 0, 0}, {0, j, 0}, {0, 0, 1}};
            break;
        case 'r' : //r = {{, , 0}, {, , 0}, {0, 0, 1}};
            break;
        case 's' : //r = {{, , 0}, {, , 0}, {0, 0, 1}};
    }
    return (r);
}

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 84)
        return (84);
    for (int i = 0; i != ac; i++) {
        switch (av[i][1]) {
        case 'h' : display_help();
            return (0);
            break;
        case 't' : return (0);
            break;
        case 'z' : return (0);
            break;
        case 'r' : return (0);
            break;
        case 's' : return (0);
            break;
        }
    }
    return (0);
}
