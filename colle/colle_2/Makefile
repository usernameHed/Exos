SRC     =	./src/main.c			\
		./src/brut.c			\
		./src/my_error.c		\
		./src/my_putchar.c		\
		./src/my_putstr.c		\
		./src/my_strlen.c		\
		./src/my_getnbr.c		\
		./src/my_put_nbr.c		\
		./src/calcule_inter_para.c	\
		./src/search_error.c		\
		./src/epur_space.c		\

OBJ     =       $(SRC:.c=.o)

NAME    =       calculator

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
