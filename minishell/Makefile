NAME = minishell

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

CC = cc

RM = rm -f

LIBFT = ./libft/libft.a

CFLAGS = -c #-fsanitize=address #-Wall -Wextra -Werror

all: $(LIBFT) $(NAME)

%.c:
	$(CC) $(CFLAGS) $(SRCS)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LIBFT)

clean:
	$(RM) $(OBJS)
	make clean -C libft

fclean: clean
	$(RM) $(NAME) libft/libft.a
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re lib
