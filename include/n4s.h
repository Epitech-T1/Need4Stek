/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** n4s
*/

#ifndef N4S_H_
#define N4S_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define START "start_simulation"
#define STOP "stop_simulation"
#define FORWARD "car_forward:"
#define DIR "wheels_dir:"
#define LIDAR "get_info_lidar"
#define SPEED_MAX "get_car_speed_max"
#define SPEED_MIN "get_car_speed_min"
#define CURRENT_SPEED "get_current_speed"
#define END_COMMAND "Track Cleared"

typedef struct info_s {
    char *input;
    float dist_left;
    float dist_middle;
    float dist_right;
    float speed;
    double dir;
    int end;
} info_t;

void adjust_dir(info_t *info);
int end_track(info_t *info);
float get_next_nbr(char *str);
void get_lidar(info_t *info);
void my_putchar(char c);
void my_putstr(char const *str);
void my_put_float(double nbr);
int command(info_t *info, char *command, float arg);
void next_speed(info_t *info);
void speed(info_t *info);
void adjust_speed(info_t *info);

#endif /* !N4S_H_ */
