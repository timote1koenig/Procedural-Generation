##
## Author: Timoté Koenig 
## File: Makefile 
##

SRC = 	main.cpp							\
		src/Tile/Tile.cpp					\
		src/Type/Type.cpp					\
		src/Render/Render.cpp				\

INCLUDEFLAGS =	-I./includes/				\
				-I./includes/Tile/			\
				-I./includes/Type/			\
				-I./includes/Render/		\

OBJ = $(SRC:.cpp=.o)

NAME = project

CPPFLAGS = -Wall -Wextra -Werror -lraylib $(INCLUDEFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ) $(CPPFLAGS)

debug: CPPFLAGS += -g
debug: all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all