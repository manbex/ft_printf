NAME = libftprintf.a

SRC = ft_printf.c srcs/print_p.c srcs/print_id.c srcs/print_s.c \
	srcs/print_c.c srcs/print_x.c srcs/print_u.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -L ./libft -lft
RM = rm -f

$(NAME): $(OBJ)
	$(MAKE) -C ./libft
	mv  ./libft/libft.a ./libftprintf.a
	ar rcs $@ ${OBJ}

all: $(NAME)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
