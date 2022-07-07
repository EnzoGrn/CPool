##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiles file
##

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

INCLUDE	=	mylist.h

all:	$(NAME)
	cp $(NAME) ..
	cp $(INCLUDE) ../../include

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(INCLUDE) ../../include/
	make clean

clean:
	rm -f $(OBJ)

flcean:	make clean
	rm -f $(NAME)

re:	all
	fclean
