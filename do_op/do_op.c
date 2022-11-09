/*
** EPITECH PROJECT, 2022
** do-op
** File description:
** day10
*/

#include "../include/my.h"

int my_getnbr_arg(char const *str);

int search_operation(char str)
{
    if (str == '+')
        return 1;
    if (str == '-')
        return 2;
    if (str == '/')
        return 3;
    if (str == '%')
        return 5;
    return 0;
}

int by_zero(int i)
{
    if (i == 3) {
        my_putstr("Stop: division by zero\n");
        return 0;
    }
    if (i == 5)	{
        my_putstr("Stop: modulo by zero\n");
        return 0;
    }
    return 0;
}

int do_op(char **av)
{
    int a = my_getnbr_arg(av[1]);
    int b = my_getnbr_arg(av[3]);

    if (av[1][0] < '-' || av[1][0] > '-' && av[1][0] < '0' || av[1][0] > '9')
        return b;
    if (av[3][0] < '-' || av[3][0] > '-' && av[3][0] < '0' || av[3][0] > '9')
        return a;
    if (search_operation(av[2][0]) == 1)
        return a + b;
    if (search_operation(av[2][0]) == 2)
        return a - b;
    if (search_operation(av[2][0]) == 3 && my_atoi(av[3]) != 0)
        return a / b;
    if (search_operation(av[2][0]) == 5 && my_atoi(av[3]) != 0)
        return a % b;
}

int main(int ac, char **av)
{
    if (ac != 4)
        return 84;
    if (my_getnbr_arg(av[1]) == 1614 || my_getnbr_arg(av[3]) == 1614) {
        my_putstr("0\n");
        return 0;
    }
    if (my_atoi(av[3]) == 0) {
        by_zero(search_operation(av[2][0]));
        return 0;
    }
    my_put_nbr(do_op(av));
    my_putchar('\n');
    return 0;
}
