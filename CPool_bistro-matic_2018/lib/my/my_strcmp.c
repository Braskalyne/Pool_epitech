/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** Compare two string by lexicographic size
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    int diff;

    for (i = 0; s1[i] == s2[i]; i++) {
        if (s1[i] == '\0')
            return (0);
    }
    diff = (int)(s1[i] - s2[i]);
    return (diff);
}
