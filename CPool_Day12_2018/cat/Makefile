##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make file
##

SRC     =       *.c

OBJ	=	*.o

NAME    =       cat

all:    $(NAME)

$(NAME): 
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
