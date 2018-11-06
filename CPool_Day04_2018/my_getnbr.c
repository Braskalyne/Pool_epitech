/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** atoi_like.c
*/

int my_getnbr(char const *str)
{
    int *res;
    int signe;
    int i;
    
    while((str[i] > 9) && (str[i] < 13) | (str[i] == 32))
    {
        i = i + 1;
    }
    if (str[i] == '-')
    {
        i = i + 1;
        signe = -1;
    }
    if (str[i] == '+')
    {
        i = i +1:
    }

}
