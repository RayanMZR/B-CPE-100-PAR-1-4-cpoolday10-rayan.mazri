/*
** EPITECH PROJECT, 2022
** my_sort_word_array
** File description:
** day10
*/

#include "my.h"

int my_sort_word_array(char **tab)
{
    char *swap;
    for (int i = 0; tab[i]; i++) {
        if (tab[i] == 0 || tab[i + 1] == 0)
            break;
        if (my_strcmp(tab[i], tab[i + 1]) > 0) {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
            i = 0;
        }
    }
    return (0);
}
