/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** swap
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
