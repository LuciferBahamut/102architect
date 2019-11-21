/*
** EPITECH PROJECT, 2019
** error
** File description:
** 102architect
*/

int check_if_number(char **av, int i)
{
    for (int j = 0; av[i][j] != '\0'; j++) {
        if (av[i][j] == '-')
            i++;
        if (av[i][j] < '0' || av[i][j] > '9')
            return (84);
    }
    return (0);
}

int check_arg2_after_flag(char **av, int i)
{
        check_if_number(av, i);
        i++;
        check_if_number(av, i);
        i++;
        if (check_if_number(av, i) == 0)
            return (84);
}

int check_arg1_after_flag(char **av, int i)
{
        check_if_number(av, i);
        i++;
        if (check_if_number(av, i) == 0)
            return (84);
}

int error_handling(int ac, char **av)
{
    if (ac == 3 || ac == 0)
        return (84);
    for (int i = 0; av[i]; i++) {
        if (i == 1 || 2)
            check_if_number(av, i);
        if (i < 2)
        {
            if (av[i][1] == 't' || 'z')
                check_arg2_after_flag(av, i + 1);
            if (av[i][1] == 'r' || 's')
                check_arg1_after_flag(av, i + 1);
        }
    }
    return (0);
}
