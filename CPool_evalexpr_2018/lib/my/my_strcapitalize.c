/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** Capitalize the first letter of every word
*/

char *my_strcapitalize(char *str)
{
    int not_word = 1;
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c > 47 && c < 58) {
            if (not_word == 1 && c >= 'a' && c <= 'z')
                str[i] -= 32;
            else if (not_word == 0 && c >= 'A' && c <= 'Z')
                str[i] += 32;
            not_word = 0;
        } else {
            not_word = 1;
        }
    }
    return (str);
}
