##
## EPITECH PROJECT, 2019
## C++ d06
## File description:
## makefile
##

SRC	=	src/*.cpp

NAME	=	AgeOfCivilization

CFLAGS	=	-Wall -Wextra -I ./headers

LFLAGS	=	-lncurses

$(NAME):
	g++ $(CFLAGS) $(SRC) -o $(NAME) $(LFLAGS)

all:	$(NAME)

clean:
	rm -rf *~

fclean:	clean
	rm -rf $(NAME)

re:	fclean	all