/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (0);
}
