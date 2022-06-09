/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** info
*/

#include "../include/n4s.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int command(info_t *info, char *command, float arg)
{
    unsigned long size = 0;

    my_putstr(command);
    if (arg < 84)
        my_put_float(arg);
    my_putchar('\n');
    getline(&(info->input), &size, stdin);
    return (0);
}
void my_put_float(double nbr)
{
    char *str = malloc(sizeof(int) * 10);

    gcvt(nbr, 3, str);
    my_putstr(str);
}
