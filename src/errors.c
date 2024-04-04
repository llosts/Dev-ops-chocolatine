/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** error.c
*/

#include "retvalue.h"
#include "stdlib.h"

int check_error(int ac, char **av)
{
    if (ac != 1 || av == NULL)
        return ERROR_EXIT;
    return SUCCESS_EXIT;
}
