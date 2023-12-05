NAME = libftprintf.a
CFLAGS = -Werror -Wextra -Wall -std=c99

CC = cc

INC = libftprintf.h

SRCS =	ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_howmuch.c\

OBJS = $(SRCS:%.c=%.o)
%.o : %.c $(INC)
		$(CC) -c $(CFLAGS) $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
		ar rc $(NAME) $(OBJS)

%.o : %.c $(INC)
		$(CC) -c $(CFLAGS) $< -o $@

clean :
		rm -rf $(OBJS) $(OBJSB)

fclean : clean
		rm -rf $(NAME)
re : fclean all

.PHONY: all clean fclean re %