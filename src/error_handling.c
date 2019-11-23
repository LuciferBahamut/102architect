/*
** EPITECH PROJECT, 2019
** error
** File description:
** 102architect
*/

#include "my.h"

int check_if_number(char **av, int i)
{
    for (int j = 0; av[i][j]; j++) {
        if (av[i][j] == '-')
            j++;
        if (av[i][j] < '0' || av[i][j] > '9')
            return (1);
    }
    return (0);
}

int check_arg2_after_flag(char **av, int i)
{
    if (check_if_number(av, i) == 1 || check_if_number(av, i + 1) == 1)
        return (1);
    return (0);
}

int check_arg1_after_flag(char **av, int i)
{
    if (check_if_number(av, i) == 1)
        return (1);
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac == 3 || ac == 0)
        return (1);
    for (int i = 0; i < ac - 1; i++) {
        if ((i == 0 || i == 1) && check_if_number(av, i) == 1)
            return (1);
        if (i >= 2)
        {
            if (av[i][1] == 't' || av[i][1] == 'z') {
                if (check_arg2_after_flag(av, i + 1) == 1)
                    return (1);
            }
            if (av[i][1] == 'r' || av[i][1] == 's') {
                if (check_arg1_after_flag(av, i + 1) == 1)
                    return (1);
            }
        }
    }
    return (0);
}
