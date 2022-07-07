##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiles file
##

SRCMAIN = cat.c

SRC = 	my_cat.c


OBJ = $(SRC:.c=.o)
OBJ += $(SRCMAIN:.c=.o)

OBJ_TEST = $(SRC:.c=.o)


NAME = cat

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ../lib/my/
	gcc $(OBJ) -o $(NAME) -L../lib/my -lmy -I../include/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: all fclean

tests_run:	$(OBJ_TEST)
		gcc $(OBJ_TEST) -o unit_tests ../tests/test_cat.c -L../lib/my/ -lmy \
		--coverage -lcriterion
