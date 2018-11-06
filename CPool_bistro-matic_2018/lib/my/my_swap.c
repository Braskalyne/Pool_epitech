/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** Swap two variables
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
