##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiles file
##

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

INCLUDE	=	my.h

all:	$(NAME)
	cp $(NAME) ..
	cp $(INCLUDE) ../../include

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
