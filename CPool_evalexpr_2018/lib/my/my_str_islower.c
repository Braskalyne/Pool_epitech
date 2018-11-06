/*
** EPITECH PROJECT, 2018
** my_str_islower
** File description:
** Verify if string contains only lowercase letters
*/

int my_str_islower(char const *str)
{
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (!(c >= 'a' && c <= 'z'))
            return (0);
    }
    return (1);
}
