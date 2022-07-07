##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiles file
##

SRC = $(wildcard *.c)

NAME = infin_add

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc $(OBJ) -o $(NAME) -I ./include -l my -L lib

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	rm include/my.h
