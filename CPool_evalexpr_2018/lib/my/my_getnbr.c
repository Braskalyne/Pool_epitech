/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** Return first nbr in a string
*/

int process_digit(int nbr, char c, int *neg, int *overflow)
{
    int digit  = c - 48;

    if (digit >= 0 && digit <= 9) {
        if (nbr > 214748364 || (nbr == 214748364 && (digit > 7 + *neg % 2))) {
            *overflow = 1;
            return (0);
        }
        nbr = nbr * 10 + digit;
    } else if (digit == '-' - 48) {
        (*neg)++;
    } else {
        if (digit != '+' - 48 && nbr == 0)
            *neg = 0;
        else
            return (nbr);
    }
    return nbr;
}

int my_getnbr(char const *str)
{
    int nbr = 0;
    int neg = 0;
    int overflow = 0;
    int i = 0;

    while (str[i] == 43 || str[i] == 45 || str[i] > 47 && str[i] < 58) {
        nbr = process_digit(nbr, str[i], &neg, &overflow);
        if (overflow)
            return (0);
        i++;
    }
    if (neg % 2)
        nbr *= -1;
    return (nbr);
}
