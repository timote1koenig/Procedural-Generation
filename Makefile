##
## Author: Timoté Koenig 
## File: Makefile 
##

SRC = 	main.cpp							\

INCLUDEFLAGS =	-I./include/

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