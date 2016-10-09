##
## Makefile for make in /home/fenass_b/Colles
## 
## Made by benjamin fenasse
## Login   <fenass_b@epitech.net>
## 
## Started on  Tue Apr 28 14:10:10 2015 benjamin fenasse
## Last update Tue Apr 28 17:21:14 2015 ugo belfiore
##

NAME	=	des_chiffres_et_des_chiffres

RM	=	rm -f

CC	=	gcc

CFLAGS	+=	-I./include -W -Wall -Werror -Wextra

SRC	=	./src/main.c		\
		./src/div_calc.c	\
		./src/basic.c		\
		./src/brute_force.c	\
		./src/test_good.c	\

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

