/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** Compute length of string
*/

int my_strlen(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        counter++;
    }
    return (counter);
}
