/*
** EPITECH PROJECT, 2018
** my_str_isupper
** File description:
** Verify if string contains only uppercase letters
*/

int my_str_isupper(char const *str)
{
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (!(c >= 'A' && c <= 'Z'))
            return (0);
    }
    return (1);
}
