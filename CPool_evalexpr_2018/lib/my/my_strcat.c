/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** Function that concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int len_dest;
    int len_src;
    int i;

    for (len_dest = 0; dest[len_dest] != '\0'; len_dest++);
    for (len_src = 0; src[len_src] != '\0'; len_src++);
    for (i = 0; i < len_src; i++) {
        dest[len_dest + i] = src[i];
    }
    dest[i + len_dest] = '\0';
    return dest;
}
