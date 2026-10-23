NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= part1_libc.c part2_additional.c part3_list.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	$(CC) -Wall -Wextra tests.c -L. -lft -o run_tests
	./run_tests

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) run_tests

re: fclean all

.PHONY: all clean fclean re test
