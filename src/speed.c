/*
** EPITECH PROJECT, 2021
** B-AIA-200-STG-2-1-n4s-lilou.stoll-metz
** File description:
** speed
*/

#include "../include/n4s.h"

void next_speed(info_t *info)
{
    if (info->dist_middle >= 600)
        info->speed = 0.5;
    else if(info->dist_middle >= 400)
        info->speed = 0.4;
    else
        info->speed = 0.2;
}

void speed(info_t *info)
{
    int end = 0;

    if (info->dist_middle >= 2200)
        info->speed = 1.0;
    else if (info->dist_middle >= 1500)
        info->speed = 0.8;
    else if (info->dist_middle >= 1000)
        info->speed = 0.6;
    else
        next_speed(info);
}

void adjust_speed(info_t *info)
{
    speed(info);
    command(info, FORWARD, info->speed);
}
