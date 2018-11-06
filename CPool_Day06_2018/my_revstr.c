/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int lenght;
    int back;
    char temp;

    back = 0;
    lenght = 0;
    while (str[lenght])
    {
        lenght = lenght + 1;
    }
    lenght = lenght - 1;
    while (lenght > back)
    {
        temp = str[lenght];
        str[lenght] = str[back];
        str[back] = temp;
        lenght = lenght - 1;
        back = back + 1;
    }
    return (str);
}
