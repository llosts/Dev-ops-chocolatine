/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** main.c
*/

#include "my.h"

#include <stdio.h>

int main(int ac, char **av)
{
    int retValue = check_error(ac, av);

    printf("%d\n", retValue);
    return retValue;
}
