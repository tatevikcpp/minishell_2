NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = $(wildcard *.c)
BSRCS = $(wildcard *ft_lst.c)

OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

all: ${NAME}

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: ${BOBJS}
	ar rcs ${NAME} ${OBJS} ${BOBJS}
clean:
	${RM} ${OBJS} ${BOBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all

.PHONY: all bonus clean fclean re
