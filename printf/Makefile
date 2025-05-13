# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/13 15:32:33 by tomandra          #+#    #+#              #
#    Updated: 2025/05/13 19:17:43 by tomandra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_printf_utils.c \
		
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS) 
	@echo "Created library"
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $(SRC)
	@echo "Compiled all files"

clean:
	@rm -f $(OBJS)
	@echo "Cleaned all objects"
	
fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned library"
	
re: fclean all

.PHONY: all clean fclean re