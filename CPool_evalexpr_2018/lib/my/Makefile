##
## EPITECH PROJECT, 2018
## Makefile for Day 10
## File description:
## Compiles the day 10
##

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libmy.a
HEADER = my.h

all: $(NAME)
	cp $(NAME) ..
	mkdir -p ../../include
	cp $(HEADER) ../../include

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):
	gcc -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../$(NAME)
	rm -f $(NAME)
	rm -f ../../include/$(HEADER)

re: fclean all

.PHONY: re clean fclean all
