##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

SOURCE  =       *.c

OBJ     =       *.o

NAME    =       infin_add

GCC     =       gcc -c

GCC2    =       gcc -o

RM      =       rm

all:    $(NAME)

$(NAME):
	$(GCC) $(SOURCE)
	$(GCC2) $(NAME) -Wall -Wextra --pedantic $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:     fclean all
