/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** my_getnbr
*/

int my_getnbr(char str)
{
    int number = 0;

    number = (number + (str - 48));
    return (number);
}
