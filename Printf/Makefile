NAME = libftprintf.a

SRCS = ft_putchar_fd.c ft_putstr_fd.c ft_printf.c functions.c types.c corpus.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c ft_printf.h Makefile 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
