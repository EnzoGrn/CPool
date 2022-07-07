##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiles file
##

SRC	=	csfml.c

OBJ	=	$(SRC:.c=.o)

NAME	=	open_window

INCLUDE	=	mylist.h

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC) -g -I/usr/local/include/
	gcc -o $(NAME) $(OBJ) -L/usr/local/lib -lcsfml-window -lcsfml-graphics

clean:
	rm -f $(OBJ)

flcean:	make clean
	rm -f $(NAME)

re:	all
	fclean
