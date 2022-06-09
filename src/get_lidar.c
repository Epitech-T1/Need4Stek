/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** get_lidar
*/

#include "../include/n4s.h"
#include <stdlib.h>
#include <stdio.h>

float get_next_nbr(char *str)
{
    int i;
    char *nbr = malloc(sizeof(char) * 7);

    for (i = 0; str[i] != ':' && str[i] != '\0'; i++)
        nbr[i] = str[i];
    nbr[i] = '\0';
    return(atof(nbr));
}

void get_lidar(info_t *info)
{
    int cpt = 0;

    command(info, LIDAR, 84);
    while (cpt < 3)
        if (info->input++[0] == ':')
            cpt++;
    info->dist_left = get_next_nbr(info->input);
    while (cpt < 18)
        if (info->input++[0] == ':')
            cpt++;
    info->dist_middle = get_next_nbr(info->input);
    while (cpt < 34)
        if (info->input++[0] == ':')
            cpt++;
    info->dist_right = get_next_nbr(info->input);
}
