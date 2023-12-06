NAME = libftprintf.a
CFLAGS = -Werror -Wextra -Wall -std=c99

CC = cc

INC = libftprintf.h

SRCS =	ft_printf.c\
		ft_put_c.c\
		ft_put_s.c\
		ft_put_d.c\
		ft_put_p.c\
		ft_put_x.c\
		ft_put_u.c\

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