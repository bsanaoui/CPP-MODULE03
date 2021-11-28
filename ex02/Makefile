NAME = ClapTrap

CC = clang++
FLAGS = -Werror -Wextra -Wall

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all