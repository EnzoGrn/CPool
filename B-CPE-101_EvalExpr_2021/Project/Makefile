##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile that build the project
##

SRC		= $(wildcard *.c)

NAME	= eval_expr

OBJ		= $(SRC:.c=.o)

$(NAME):	$(OBJ) build_lib
	$(LIB)
	gcc $(OBJ) -o $(NAME) -l my -L lib

build_lib:
	make -C lib/my

all:	$(NAME)

clean: tests_clean
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re: fclean all

tests_run: tests_clean
	gcc -o unit_tests ./tests/reverse_polish_notation.c \
	reverse_polish_notation.c maths_rules.c write_polish.c malloc_sizes.c \
	reverse_polish_helpers.c expr_to_array.c array_length.c -L lib/my \
	-l my --coverage -lcriterion
	./unit_tests

tests_clean:
	rm -f unit_tests*
