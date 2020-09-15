##
## EPITECH PROJECT, 2019
## C++ d06
## File description:
## makefile
##

SRC	=	*.cpp

NAME	=	CppProject

CFLAGS	=	-Wall -Wextra -I ./header

$(NAME):
	g++ $(CFLAGS) $(SRC) -o $(NAME) $(LFLAGS)

all:	$(NAME)

clean:
	rm -rf *~

fclean:	clean
	rm -rf $(NAME)

re:	fclean	all