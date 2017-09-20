NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(NAME) clean

$(NAME): $(SRC)
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
