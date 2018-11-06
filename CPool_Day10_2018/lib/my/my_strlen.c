/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** strlen
*/

int my_strlen(char const *str)
{
    int lenght;

    lenght = 0;
    while(str[lenght])
    {
        lenght = lenght + 1;
    }
    return (lenght);
}
