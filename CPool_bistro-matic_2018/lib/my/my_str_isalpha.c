/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** Verify if string contains only aphanumeric characters
*/

int my_str_isalpha(char const *str)
{
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (!(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c > 47 && c < 58))
            return (0);
    }
    return (1);
}
