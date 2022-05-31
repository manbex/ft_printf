NAME = libft.a

SRC = ft_putchar.c ft_putnbr.c ft_strlen.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
RM = rm -f

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
