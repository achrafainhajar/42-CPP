CC = c++ -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp

NAME = FragTrap

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME) 

fclean: clean	
	rm -f $(NAME) 

re : fclean all