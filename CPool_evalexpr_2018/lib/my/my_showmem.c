/*
** EPITECH PROJECT, 2018
** my_showmem
** File description:
** Show a chunk of memory
*/

void my_putchar(char c);

void display_address(char const *address, int size)
{
    char *hex = "0123456789ABCDEF";
    int address_int = (int)address;
    int divisor = 1;

    for (int i = 0; i < size - 1; i++) {
        divisor *= 16;
    }
    for (int j = 0; j < size; j++) {
        my_putchar(hex[address_int / divisor]);
        address_int %= divisor;
        divisor /= 16;
    }
}

void display_content(char const *str, int i_line, int line_length)
{
    char c;
    char *hex = "0123456789ABCDEF";

    for (int i = 0; i < line_length; i++) {
        my_putchar(hex[(unsigned char)(str[i + i_line * 16]) / 16]);
        my_putchar(hex[(unsigned char)(str[i + i_line * 16]) % 16]);
        if (i % 2 == 1)
            my_putchar(' ');
    }
    for (int j = 0; j < line_length; j++) {
        c = str[j + i_line * 16];
        if (c >= 32 && c <= 126)
            my_putchar(c);
        else
            my_putchar('.');
    }
}

int my_showmem(char const *str, int size)
{
    int lines = size / 16;
    int line_length;

    if (size % 16 != 0)
        lines++;
    for (int i_line = 0; i_line < lines; i_line++) {
        display_address((str + i_line * 16), 8);
        my_putchar(':');
        my_putchar(' ');
        line_length = (i_line == lines - 1 && size % 16 != 0) ? size % 16 : 16;
        display_content(str, i_line, line_length);
        my_putchar('$');
        my_putchar('\n');
    }
    return (0);
}
