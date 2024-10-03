SRC = main.c
OBJ = main.o

CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

NAME = prog

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: name

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all