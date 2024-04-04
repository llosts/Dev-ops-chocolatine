/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "my.h"
#include "retvalue.h"

Test(test1, error_return_value)
{
    int argc = 0;
    char **argv = NULL;

    cr_assert(check_error(argc, argv) == ERROR_EXIT);
}
