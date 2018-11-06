/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** my_strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i]) {
        while (str[i] == to_find[j]) {
            i = i + 1;
            j = j + 1;
            if (to_find[i] == '\0') {
                return (*to_find);
            }
        }
        j = 0;
        i = i + 1;
    }
    return (0);
}
