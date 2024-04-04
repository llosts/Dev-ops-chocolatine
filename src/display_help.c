/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** display_help.c
*/

#include <stdio.h>
#include <stdbool.h>

int display_help(int ac, char *str)
{
    if (ac != 2 || (str[0] != '-' && str[1] != 'h'))
        return false;
    printf("USAGE\n\t");
    printf("./chocolatine\n");
    printf("\nDESCRIPTION\n\t");
    printf("display the return value of the program\n");
    return true;
}
