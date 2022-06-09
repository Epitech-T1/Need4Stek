/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** adjust_dir
*/

#include "../include/n4s.h"

float get_value_dir(info_t *info)
{
    int diff = fabs(1 - (info->dist_right - info->dist_left));

    if (diff <= 0.2)
        return (0);
    if (diff < 0.4)
        return (0.1);
    if (diff < 0.6)
        return (0.13);
    if (diff < 0.8)
        return (0.18);
    if (diff > 0.8)
        return (0.23);
    return (0);
}

void adjust_dir(info_t *info)
{
    if (info->dist_middle < 900) {
        if (info->dist_left < info->dist_right)
            info->dir = get_value_dir(info) * -1;
        if (info->dist_left > info->dist_right)
            info->dir = get_value_dir(info);
    } else  if (info->dist_middle < 2000) {
        if (info->dist_left < info->dist_right)
            info->dir = get_value_dir(info) / -2.5;
        if (info->dist_left > info->dist_right)
            info->dir = get_value_dir(info) / 2.5;
    } else
        info->dir = 0;
    command(info, DIR, info->dir);
}
