/*
** EPITECH PROJECT, 2018
** my_strncmp
** File description:
** Compare n bytes of two string by lexicographic size
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;
    int identical = 1;

    for (i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            identical = 0;
            break;
        }
        if (s1[i] == '\0' && s2[i] == '\0') {
            return (0);
        }
    }
    if (identical)
        return (0);
    else
        return (int)(s1[i] - s2[i]);
}
