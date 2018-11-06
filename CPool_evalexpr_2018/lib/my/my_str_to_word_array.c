/*
** EPITECH PROJECT, 2018
** my_str_to_word_array
** File description:
** Splits a string into words and return a word array
*/

#include <stdlib.h>

char *my_strncpy(char *dest, char const *src, int n);
int my_strlen(char const *str);


void word_counter(char c, int *word_count, int *in_word)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c > 47 && c < 58) {
        if (!*in_word) {
            (*word_count)++;
            *in_word = 1;
        }
    } else if (*in_word) {
        *in_word = 0;
    }
}

void add_word(char **result, int word, char const *start, int size)
{
    result[word] = malloc(sizeof(char) * (size + 1));
    my_strncpy(result[word], start, size);
    result[word][size] = '\0';
}

void split_string(char const *str, char **result)
{
    int word_count = 0;
    int in_word = 0;
    int changed = 0;
    int start = 0;

    for (int i = 0; i <= my_strlen(str); i++) {
        if (str[i] != '\0')
            word_counter(str[i], &word_count, &in_word);
        else
            in_word = 0;
        if (in_word == 1 && changed == 0)
            start = i;
        else if (in_word == 0 && changed == 1)
            add_word(result, word_count - 1, &str[start], i - start);
        changed = in_word;
    }
}

char **my_str_to_word_array(char const *str)
{
    int word_number = 0;
    int word_count = 0;
    int in_word = 0;
    char **result;

    for (int i = 0; str[i] != '\0'; i++) {
        word_counter(str[i], &word_number, &in_word);
    }
    result = malloc(sizeof(char *) * (word_number + 1));
    split_string(str, result);
    result[word_number] = NULL;
    return result;
}
