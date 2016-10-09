##
## Makefile for  in /home/belfio_u/rendu/106bombyx
## 
## Made by ugo belfiore
## Login   <belfio_u@epitech.net>
## 
## Started on  Thu Feb 12 11:02:15 2015 ugo belfiore
## Last update Wed May  6 11:27:27 2015 ugo belfiore
##

SRC     =       ./src/main.c			\
		./src/evenement.c		\
		./src/aff_pix_img.c		\

OBJ     =       $(SRC:.c=.o)

NAME    =       colle

CC      =       clang

CFLAGS  +=      -W -Wall -Wextra
CFLAGS	+=	-I./include

LDFLAGS = -L./lib -lmlx
LDFLAGS += -L/usr/lib64/X11 -lXext -lX11 -lm

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f $(NAME)

re: fclean all
