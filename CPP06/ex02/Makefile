CC = c++ -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp Base.cpp

NAME = main

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME) 

fclean: clean	
	rm -f $(NAME) 

re : fclean all