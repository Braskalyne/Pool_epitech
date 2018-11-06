/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <unistd.h>

char **my_str_to_word_array(char const *str)
{
    char **tab;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
	
    tab = malloc(sizeof(char) * 5);
    while (str[i]) {
	while ((str[m] > 47 && str[m] < 58) || (str[m] > 96 && str[m] < 122) || //Compter la chaine 
        (str[m] > 64 && str[m] < 91) && (str[m] != '\0')) {                     //
            l = l + 1;                                                          //+
	    m = m + 1;                                                          //la
	}               							//malloc
	tab[j] = malloc(sizeof(char) * (l + 1));				//
	while ((str[i] > 47 && str[i] < 58) || (str[i] > 96 && str[i] < 122) || //avancer tant que a-z A-Z 0-9
	(str[i] > 64 && str[i] < 91) && (str[i] != '\0')) {			//
	    tab[j][k] = str[i];							//remplir notre tab[j]
	    i = i + 1;								//
	    k = k + 1;								//
	}									//Mettre un \0 si on est aubout du mot
	 if ((k == l) && (j > 0)){								//
		tab[j][k] = '\0';						//
		j = j + 1;							//
                l = 0;								//
		k = 0;
	}
	 while ((str[i] != '\0') && ((str[i] > 57 && str[i] < 65) ||
        (str[i] > 90 && str[i] < 97) || (str[i] > 122) || (str[i] < 48))) {
                i = i + 1;
                m = m + 1;
	 }
    }										//
    tab[j] = '\0';								//Mettre un \0 dans la dernière cellule du **tab
    return (tab);
}

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_display(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i]) {
        my_display(tab[i]);
	my_putchar('\n');
        i = i + 1;
    }
    return (0);
}

int main()
{
    char const chain[50] = "  Bonjour   je voudrais ";
    my_show_word_array(my_str_to_word_array(chain));   
    return (0);
}
