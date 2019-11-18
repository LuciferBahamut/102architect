/*
** EPITECH PROJECT, 2019
** main
** File description:
** 102architect
*/

#include "my.h"

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
