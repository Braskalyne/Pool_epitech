##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

SOURCE	=	*.c

OBJ	=	*.o

NAME	=	rush2

GCC	=	gcc -c

GCC2	=	gcc -o

RM	=	rm

all:	$(NAME)

$(NAME):
	$(GCC) $(SOURCE)
	$(GCC2) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
