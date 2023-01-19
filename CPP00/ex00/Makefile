SRC = megaphone.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
OBJ = $(SRC:.cpp=.o)
NAME = megaphone
all : $(NAME)
$(NAME) : $(OBJ)
%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@
clean :
	rm -rf $(OBJ)
fclean :clean
	rm -rf $(NAME)
re : clean all
