SOURCE := main.cpp Fixed.cpp Point.cpp bsp.cpp

NAME := bsp

all: $(NAME)

$(NAME): $(SOURCE)
	c++ -Wall -Wextra -Werror -std=c++98 $(SOURCE) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
