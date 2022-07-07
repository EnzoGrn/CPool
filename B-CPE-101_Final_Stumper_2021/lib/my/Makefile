##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiles file
##

SRC = $(shell find . -type f -name '*.c')

OBJ = $(SRC:.c=.o)

NAME = libmy.a

INCLUDE	= rush3.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(INCLUDE) ../../include/
	make clean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	all fclean
