/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** main.c
*/

#include "my.h"
#include "retvalue.h"

#include <stdio.h>
#include <stdbool.h>

int main(int ac, char **av)
{
    int retValue = SUCCESS_EXIT;

    if (display_help(ac, av[1]) == true)
        return retValue;
    retValue = check_error(ac, av);
    printf("the return value is %d\n", retValue);
    return retValue;
}
