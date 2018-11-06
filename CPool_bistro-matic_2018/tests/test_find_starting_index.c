/*
** EPITECH PROJECT, 2018
** test_find_starting_index
** File description:
** unit test for find_starting_index
*/

#include <criterion/criterion.h>
#include "prototypes.h"
#include "my.h"

Test(find_starting_index, positive_positive)
{
    char nb1[4] = {0, 2, 3, -128};
    char nb2[3] = {2, 3, -128};
    int result = find_starting_index(nb1, nb2);

    cr_assert_eq(result, 1);
}

Test(find_starting_index, negative_negative)
{
    char nb1[4] = {0, -2, -3, -128};
    char nb2[3] = {-2, -3, -128};
    int result = find_starting_index(nb1, nb2);

    cr_assert_eq(result, 1);
}

Test(find_starting_index, positive_negative)
{
    char nb1[4] = {0, 4, 6, -128};
    char nb2[4] = {-2, -2, -2, -128};
    int result = find_starting_index(nb1, nb2);

    cr_assert_eq(result, 0);
}

Test(find_starting_index, negative_positive)
{
    char nb1[4] = {0, -2, -3, -128};
    char nb2[4] = {2, 3, -128};
    int result = find_starting_index(nb1, nb2);

    cr_assert_eq(result, 1);
}

Test(find_starting_index, even)
{
    char nb1[4] = {2, 2, 2, -128};
    char nb2[4] = {2, 2, 2, -128};
    int result = find_starting_index(nb1, nb2);

    cr_assert_eq(result, 0);
}
