##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile that build the project
##

SRC	= $(wildcard *.c)

NAME	= rush3

OBJ	= $(SRC:.c=.o)

LIB	= make -C lib/my

$(NAME):	$(SRC)
	$(LIB)
	gcc $(SRC) -o $(NAME) -l my -L lib -I include

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re: fclean all
