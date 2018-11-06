##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for the bistromatic project
##

SRC = 	src/base.c \
	src/num_array.c \
	src/infin_add.c \
	src/infin_mul.c \
	src/infin_sub.c \
	src/infin_div.c \
	src/infin_mod.c \
	src/infin_compare.c \
	src/eval_expr.c \
	src/errors.c
MAIN =	src/main.c
TEST = 	tests/test_base.c \
	tests/test_num_array.c \
	tests/test_num_array2.c \
	tests/test_infin_add.c \
	tests/test_infin_sub.c \
	tests/test_infin_mul.c \
	tests/test_infin_div.c \
	tests/test_infin_mod.c \
	tests/test_infin_compare.c \
	tests/test_errors.c \
	tests/test_errors2.c \
	tests/test_eval_expr.c \
	tests/test.c
TEST_OBJ = $(notdir $(SRC:.c=.o)) $(notdir $(TEST:.c=.o))

OBJ = $(notdir $(SRC:.c=.o)) $(notdir $(MAIN:.c=.o))

NAME = calc

LIB_PATH = ./lib/my/
LIB = my
INCLUDE_PATH = ./include/

all: lib $(OBJ)
	gcc -Wall -Wextra --pedantic -o $(NAME) $(OBJ) -L$(LIB_PATH) -l$(LIB)

lib:
	@$(MAKE) -s -C $(LIB_PATH)

$(OBJ):
	gcc -c $(SRC) $(MAIN) -I$(INCLUDE_PATH)

tests_run: lib
	@gcc -c $(SRC) $(TEST) --coverage -I$(INCLUDE_PATH)
	@gcc -o test $(TEST_OBJ) -lcriterion --coverage -L$(LIB_PATH) -l$(LIB)
	@./test
	@rm -f test $(TEST_OBJ)
	@$(MAKE) -s -C $(LIB_PATH) fclean

clean:
	@$(MAKE) -s -C $(LIB_PATH) clean
	rm -f $(OBJ)

fclean: clean
	@$(MAKE) -s -C $(LIB_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all lib clean fclean re tests_run
