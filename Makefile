##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC_BASE =	main.cpp \

SRC =	$(SRC_BASE)

OBJ =	$(SRC_BASE:.cpp=.o)

NAME =	raytracer

CFLAGS = -I./include -std=c++20 -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ) $(CFLAGS) -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all