/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i = i + 1;
    while (src[j] != '\0') {
        dest[i] = src[j];
        j = j + 1;
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
