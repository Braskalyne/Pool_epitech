/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** Function that concatenates two strings
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len;
    int i;

    for (dest_len = 0; dest[dest_len] != '\0'; dest_len++);
    for (i = 0; i < nb && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}
