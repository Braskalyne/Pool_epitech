/*
** EPITECH PROJECT, 2018
** my_print_revalpha
** File description:
** reverse alphabet
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    char letter;

    letter = 122;
    while (letter >= 97)
    {
        my_putchar(letter);
        letter = letter - 1;
    }
    return (0);
}
