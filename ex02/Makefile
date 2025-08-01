SOURCE := main.cpp Fixed.cpp

NAME := now_we_are_talking

all: $(NAME)

$(NAME): $(SOURCE)
	c++ -Wall -Wextra -Werror -std=c++98 $(SOURCE) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
