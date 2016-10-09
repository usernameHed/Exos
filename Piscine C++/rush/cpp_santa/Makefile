##
## Makefile for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
## 
## Made by maxime liege
## Login   <liege_m@epitech.net>
## 
## Started on  Sun Jan 17 01:11:05 2016 maxime liege
## Last update Sun Jan 17 01:21:09 2016 maxime liege
##

SRC=		main.cpp \
		LittlePony.cpp \
		Toy.cpp \
		Teddy.cpp \
		Box.cpp \
		GiftPaper.cpp \
		Wrap.cpp \
		Object.cpp \
		ConveyorBelt.cpp \
		TablePePeNoel.cpp \
		MyUnitTestToy.cpp \
		MyUnitTestWrap.cpp \
		Elf.cpp

OBJ=		$(SRC:.cpp=.o)

NAME=		SantaClaus

all:		$(NAME)

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
