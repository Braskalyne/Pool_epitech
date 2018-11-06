/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** Verify if string contains only digits
*/

int my_str_isnum(char const *str)
{
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (!(c >= '0' && c <= '9'))
            return (0);
    }
    return (1);
}
