NAME = push_swap

SRC = push.c main.c arg.c input.c bubble_sort.c deeper.c deeper2.c operations.c ./new_libft/ft_split.c ./new_libft/ft_strlcpy.c ./new_libft/ft_strlen.c ./new_libft/ft_substr.c ./new_libft/ft_strdup.c ./new_libft/ft_strjoin.c ./new_libft/ft_atoi.c ./ft_printf/ft_printf.c ./ft_printf/utils.c

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean: 
		rm -rf  $(OBJ)

fclean: clean
		rm -rf $(NAME)
		rm -rf $(OBJ)

re: fclean $(NAME)

.PHONY: all clean fclean re
