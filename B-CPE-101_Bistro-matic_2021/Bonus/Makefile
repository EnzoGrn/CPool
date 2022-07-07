##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile that build the project
##

SRC	= $(wildcard src/*.c)

NAME = bistro-gui

OBJ	= $(SRC:.c=.o)

INCLUDE = -I ./include/

LIB = -L ./lib/ -lmy -lSDL2 -lSDL2_ttf

$(NAME):	$(OBJ) build_lib
	gcc $(SRC) -o $(NAME) $(INCLUDE) $(LIB)
	rm -f src/*.o

build_lib:
	make -C lib/my

all:	$(NAME)

clean: tests_clean
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re: fclean all

tests_run: tests_clean
	gcc -o unit_tests tests/reverse_polish_notation.c \
	tests/eval_expr.c tests/infin_mul.c tests/infin_add.c \
	src/eval_expr.c src/operators.c \
	tests/infin_sub.c tests/infin_div.c tests/infin_mod.c \
	src/verifications.c src/addition.c src/substraction.c \
	src/infin_mod.c src/infin_div.c src/infin_mul.c \
	src/reverse_polish_helpers.c src/substraction_helper.c \
	src/get_index.c src/str_min_max.c src/clear.c \
	src/reverse_polish_notation.c src/maths_rules.c  src/malloc_sizes.c \
	src/expr_to_array.c src/stack.c src/zeros.c src/clear_values.c \
	src/my_calloc.c src/div_mod_helper.c src/swap_mul.c \
	src/get_sign.c src/invert.c src/replace.c \
	src/array_length.c -L lib/my -l my --coverage -lcriterion
	./unit_tests

tests_clean:
	rm -f unit_tests*
