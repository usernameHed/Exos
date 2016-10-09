##
## Makefile for  in /home/belfio_u/Hed/colle/colle_3
## 
## Made by ugo belfiore
## Login   <belfio_u@epitech.net>
## 
## Started on  Tue May 12 14:20:09 2015 ugo belfiore
## Last update Tue May 12 16:57:29 2015 ugo belfiore
##


SRC     =	./src/main.c			\
		./src/my_getnbr.c		\
		./src/my_putstr.c		\
		./src/my_putchar.c		\
		./src/wordtab.c			\
		./src/my_show_c.c		\
		./src/my_sort_int_tab.c		\
		./src/my_swap.c			\
		./src/my_show_d.c		\

OBJ     =       $(SRC:.c=.o)

NAME    =       minicut

CC      =       clang

CFLAGS  +=      -W -Wall -Wextra
CFLAGS	+=	-I ./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f $(NAME)

re: fclean all
