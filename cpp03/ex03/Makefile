SRC = ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp ScavTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98 -g

NAME = DiamondTrap

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all