/*
** EPITECH PROJECT, 2018
** my_strstr
** File description:
** Find substring to_find in string str
*/

#include <unistd.h>

char *my_strstr(char *str, char const *to_find)
{
    int len_str;
    int len_to_find;
    int match = 0;

    for (len_str = 0; str[len_str] != '\0'; len_str++);
    for (len_to_find = 0; to_find[len_to_find] != '\0'; len_to_find++);
    for (int i = 0; i <= len_str - len_to_find; i++) {
        match = 1;
        for (int j = 0; j < len_to_find; j++) {
            if (str[j + i] != to_find[j])
                match = 0;
        }
        if (match)
            return &str[i];
    }
    return NULL;
}
