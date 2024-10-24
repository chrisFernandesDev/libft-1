NAME = libft.a

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

SRC	= $(addprefix $(SRC_PATH)/, ft_bzero.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c \
	ft_memmove.c t_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strncmp.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re
