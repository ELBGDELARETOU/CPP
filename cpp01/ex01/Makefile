SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = ZombieHorde

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all