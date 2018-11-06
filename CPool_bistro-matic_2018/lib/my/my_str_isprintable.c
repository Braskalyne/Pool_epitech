/*
** EPITECH PROJECT, 2018
** my_str_isprintable
** File description:
** Verify if string contains only printable characters
*/

int my_str_isprintable(char const *str)
{
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (!(c >= 32 && c <= 126))
            return (0);
    }
    return (1);
}
