##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makes the file
##

SRC     =       step2.c		\
		my_strlen.c	\
		my_putnbr.c \
		main.c	\
		operators.c

OBJ = $(SRC:.c=.o)

NAME    =       eval_expr

all:    $(NAME)

$(NAME): $(OBJ)
	gcc -Wall -Werror -Wextra --pedantic -o $(NAME) $(OBJ)

$(OBJ):
	gcc -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

