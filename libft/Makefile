# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 16:03:36 by tomandra          #+#    #+#              #
#    Updated: 2025/05/03 20:22:29 by tomandra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_isalpha.c  ft_isdigit.c  ft_isalnum.c ft_isascii.c ft_isprint.c \
		 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		
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
