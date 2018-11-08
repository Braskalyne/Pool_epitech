##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Make my files
##

SRC	=	*.c

FILES	=	*.o

NAME	=	libmy.a

NAME2	=	my.h

CP	=	cp

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(FILES)
	mv $(NAME) lib/my

clean:
	rm -rf $(FILES)

fclean: clean
	rm lib/my/$(NAME)

re: fclean all
