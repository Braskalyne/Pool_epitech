/*
** EPITECH PROJECT, 2018
** my_strlowcase
** File description:
** Puts every letter in lowercase
*/

char *my_strlowcase(char *str)
{
    int len;

    for (len = 0; str[len] != '\0'; len++);
    for (int i = 0; i <= len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}
