# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 17:50:37 by tomandra          #+#    #+#              #
#    Updated: 2025/11/13 11:55:52 by tomandra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
SRC = parsing_args.c index_stack.c parsing_string.c utils.c \
		stack_utils.c operations.c sort.c push_swap.c
OBJS = $(SRC:.c=.o)
LIBFT = Libft/libft.a

all: $(NAME)

$(NAME): $(SRC) $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $@
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $(SRC)
	@echo "Compiled all files"

$(LIBFT):
	@make -C ./Libft -s

clean:
	@rm -f $(OBJS)
	@make clean -C ./Libft -s
	@echo "Cleaned all objects"
	
fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT)
	@echo "Cleaned library"
	
re: fclean all

.PHONY: all clean fclean re