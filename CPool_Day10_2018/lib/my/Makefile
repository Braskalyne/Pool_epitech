##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	*.c

FILES 	=	*.o

NAME	=	libmy.a

NAME2	=	my.h

CP	=	cp

PATHLIB	=	./../

PATH2	=	./../../include

all:	$(NAME)

$(NAME): 
	gcc -c $(SRC)
	ar rc $(NAME) $(FILES)
	$(CP) $(NAME) $(PATHLIB)

clean:
	rm -f $(FILES)
