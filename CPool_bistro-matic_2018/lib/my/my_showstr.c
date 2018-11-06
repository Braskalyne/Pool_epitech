/*
** EPITECH PROJECT, 2018
** my_showstr
** File description:
** Prints a string and display hex codes of non-printable characters
*/

void my_putchar(char c);

int my_showstr(char const *str)
{
    char *hex = "0123456789abcdef";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32) {
            my_putchar(92);
            my_putchar(hex[str[i] / 16]);
            my_putchar(hex[str[i] % 16]);
        } else {
            my_putchar(str[i]);
        }
    }
    my_putchar('\n');
    return (0);
}
