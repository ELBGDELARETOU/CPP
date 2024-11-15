SRC= Fixed.cpp Point.cpp main.cpp
OBJ= $(SRC:.cpp=.o)

CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++98 -g3

NAME= Fixed2

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

