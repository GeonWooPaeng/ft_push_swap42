CC = gcc
CFLAGS = -Wextra -Werror -Wall
# CFLAGS += -g
NAME = push_swap

DIR_H = ./includes/
DIR_S = ./srcs/
DIR_O = ./

SRC =	ft_lst.c					\
		ft_stack.c					\
		ft_utils.c					\
		ft_init.c					\
		./function/ft_swap.c		\
		./function/ft_push.c		\
		./function/ft_rotate.c		\
		./function/ft_rrotate.c		\
		./sort/ft_sort_utils.c		\
		./sort/ft_sort_three.c		\
		./sort/ft_sort_five.c		\
		./sort/ft_sort_more.c		\
		main.c						\

SRCS = $(addprefix $(DIR_S),$(SRC))

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -I $(DIR_H) -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) -I $(DIR_H) $(OBJS) $(CFLAGS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re