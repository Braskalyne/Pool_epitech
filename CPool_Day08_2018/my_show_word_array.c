/*
** EPITECH PROJECT, 2018
** my_show_word_array.c
** File description:
** my_show_word_array
*/

void my_putchar(char c);

void my_display(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i]) {
        my_display(tab[i]);
        my_putchar('\n');
	i = i + 1;
    }
    return (0);
}
