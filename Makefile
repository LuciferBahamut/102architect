##
## EPITECH PROJECT, 2019
## makefile
## File description:
## 102architect
##

NAME	=	102architect

SRC	=

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS	=	-I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

TU	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *# \
		rm -f *~ \
		rm -f *.gcda \
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all build TU clean fclean re
