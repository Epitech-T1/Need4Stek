/*
** EPITECH PROJECT, 2021
** B-AIA-200-STG-2-1-n4s-lilou.stoll-metz
** File description:
** end
*/

#include "../include/n4s.h"

int end_track(info_t *info)
{
    char *end = malloc(sizeof(char) * strlen(info->input) + 1);
    int i = strlen(info->input) - 1;
    int j = 0;

    if (end == NULL)
        return (84);
    for (; info->input[i] && info->input[i] != ':'; i--);
    i--;
    for (; info->input[i] && info->input[i] != ':'; i--);
    i++;
    for (; info->input[i] && info->input[i] != ':';)
        end[j++] = info->input[i++];
    end[j] = '\0';
    if (strcmp(END_COMMAND, end) == 0) {
        free(end);
        command(info, STOP, 84);
        info->end = 1;
        return (1);
    }
    free(end);
    return (0);
}
