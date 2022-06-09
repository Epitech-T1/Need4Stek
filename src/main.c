/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** main
*/

#include "../include/n4s.h"

int setup(info_t *info)
{
    command(info, START, 84);
    info->speed = 0;
    info->dir = 0;
    info->end = 0;
}

int n4s(void)
{
    info_t *info = malloc(sizeof(info_t));

    setup(info);
    while (info->end == 0) {
        get_lidar(info);
        adjust_dir(info);
        adjust_speed(info);
        end_track(info);
    }
    command(info, STOP, 84);
}

int main (void)
{
    return (n4s());
}
