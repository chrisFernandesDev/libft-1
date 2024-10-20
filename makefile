NAME	= libft.a

CC	= cc
CFLANGS	= -Wall -Wextra -Werror

OBJ	= ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlen.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLANGS) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re