/*
** EPITECH PROJECT, 2018
** test_my_strcpy.c
** File description:
** test_strcpy
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test (my_strcpy, copy_string_in_empty_array)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    cr_assert_str_eq (dest, "Hello");
}
