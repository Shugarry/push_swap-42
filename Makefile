CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = srcs/push_swap.c srcs/push_swap_utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	make all -c libft
	$(CC) $(CFLAGS) $(SRC) libft/libft.a -o $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -c libft
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean flclean
