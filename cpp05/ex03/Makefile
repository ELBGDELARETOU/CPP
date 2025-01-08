SRC= main.cpp AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJ= $(SRC:.cpp=.o)

CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++98

NAME= whatever

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