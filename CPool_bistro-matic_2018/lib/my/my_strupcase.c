/*
** EPITECH PROJECT, 2018
** my_strupcase
** File description:
** Puts every letter in UPPERCASE
*/

char *my_strupcase(char *str)
{
    int len;

    for (len = 0; str[len] != '\0'; len++);
    for (int i = 0; i <= len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}
