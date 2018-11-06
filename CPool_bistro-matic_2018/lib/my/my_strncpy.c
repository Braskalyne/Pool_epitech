/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** Copy n characters from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int len;

    for (len = 0; src[len] != '\0'; len++);
    for (int i = 0; i < n; i++) {
        if (i < len)
            dest[i] = src[i];
        else
            dest[i] = '\0';
    }
    return dest;
}
