.PHONY: all clean fclean re
CC = gcc
AR = ar rcs
FLAGS = -Wall -Werror -Wextra 
NAME = libft.a
SRCS_DIR = srcs/
INC_DIR = includes/
HEADER = $(INC_DIR)libft.h
SRCS = $(SRCS_DIR)ft_putchar.c \
       $(SRCS_DIR)ft_putstr.c \
	$(SRCS_DIR)ft_strcmp.c \
	$(SRCS_DIR)ft_strlen.c \
	$(SRCS_DIR)ft_swap.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(AR) $(NAME) $^

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
