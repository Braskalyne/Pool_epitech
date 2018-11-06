/*
** EPITECH PROJECT, 2018
** my_evil_str
** File description:
** str_rev
*/

char *my_evil_str(char *str)
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
