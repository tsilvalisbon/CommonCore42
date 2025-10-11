# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 17:50:37 by tomandra          #+#    #+#              #
#    Updated: 2025/09/30 19:14:29 by tomandra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
SRC = parsing_args.c parsing_stack.c parsing_string.c parsing_utils.c \
		utils.c stack_utils.c main.c
OBJS = $(SRC:.c=.o)
IMPLIBFT = ImprovedLibft/improvedlibft.a

all: $(NAME)

$(NAME): $(SRC) $(OBJS) $(IMPLIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(IMPLIBFT) -o $@
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $(SRC)
	@echo "Compiled all files"

$(IMPLIBFT):
	@make -C ./ImprovedLibft -s

clean:
	@rm -f $(OBJS)
	@make clean -C ./ImprovedLibft -s
	@echo "Cleaned all objects"
	
fclean: clean
	@rm -f $(NAME)
	@rm -f $(IMPLIBFT)
	@echo "Cleaned library"
	
re: fclean all

.PHONY: all clean fclean re