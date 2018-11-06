/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** Reverses a string
*/

char *my_revstr(char *str)
{
    int length;
    char swap;

    for (length = 0; str[length] != '\0'; length++);
    for (int i = 0; i < length / 2; i++) {
        swap = str[length - i - 1];
        str[length - i - 1] = str[i];
        str[i] = swap;
    }
    return str;
}
