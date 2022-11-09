/*
** EPITECH PROJECT, 2022
** my_get_nbr_arg
** File description:
** day10
*/

#include "../include/my.h"
#include <stdlib.h>

int my_getnbr_arg(char const *str)
{
    int i = 0;
    int j = 1;
    char *buffer = malloc(sizeof(char) * my_strlen(str));
    int k = 0;
    int a = 0;
    for (a = 0; str[a] != 0; a++)
        if (str[i] >= '0' && str[i] <= '9')
            a++;
    if (a == 0)
        return 0;
    while (str[i] < '0' || str[i] > '9')
        i++;
    while (str[i] >= '0' && str[i] <= '9') {
        buffer[k] = str[i];
        if (str[i - 1] == '-')
            j = -1;
        k++;
        i++;
    }
    return my_atoi(buffer) * j;
}
