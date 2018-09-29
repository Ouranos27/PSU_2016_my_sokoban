
##
## Makefile for Makefile in /home/ouranos27/my_desktop/PSU/PSU_2016_my_sokoban
## 
## Made by philippe kam
## Login   <philippe.kam@epitech.eu>
## 
## Started on  Tue Dec 13 17:17:37 2016 philippe kam
## Last update Tue Dec 20 21:37:55 2016 philippe kam
##

CFLAGS	+= -Wall -Wextra -Werror

SRC	=	my_sokoban.c		\
		player.c		\
		my_str_to_wordtab.c	\
		map.c			\
		my_putchar.c		\
		my_strcmp.c		\
		my_putstr.c		\
		usage.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -g $(SRC) $(CFLAGS) -o $(NAME) -lncurses

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		re fclean all
