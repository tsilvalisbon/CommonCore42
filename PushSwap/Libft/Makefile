# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 16:03:36 by tomandra          #+#    #+#              #
#    Updated: 2025/09/17 11:38:08 by tomandra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
MKDIR = mkdir -p

SRC_DIR	= src/
OBJS_DIR = objs/
INC_DIR	= ./includes
FILE_DIR = $(SRC_DIR)file/
MEMORY_DIR = $(SRC_DIR)memory/
STRING_DIR = $(SRC_DIR)string/
VERIFICATION_DIR = $(SRC_DIR)verification/
LIST_DIR = $(SRC_DIR)list/
PRINT_DIR = $(SRC_DIR)printf/
GNL_DIR = $(SRC_DIR)GNL/

CFLAGS = -Wall -Werror -Wextra -I $(INC_DIR)
		
VERIFICATION =  $(VERIFICATION_DIR)ft_isalnum.c $(VERIFICATION_DIR)ft_isalpha.c \
				$(VERIFICATION_DIR)ft_isascii.c $(VERIFICATION_DIR)ft_isdigit.c \
				$(VERIFICATION_DIR)ft_isprint.c

MEMORY =    	$(MEMORY_DIR)ft_bzero.c $(MEMORY_DIR)ft_calloc.c $(MEMORY_DIR)ft_memchr.c \
				$(MEMORY_DIR)ft_memcmp.c $(MEMORY_DIR)ft_memcpy.c $(MEMORY_DIR)ft_memmove.c \
				$(MEMORY_DIR)ft_memset.c

FILE =			$(FILE_DIR)ft_putchar_fd.c $(FILE_DIR)ft_putendl_fd.c $(FILE_DIR)ft_putnbr_fd.c \
				$(FILE_DIR)ft_putstr_fd.c
		
STRING = 		$(STRING_DIR)ft_atoi.c $(STRING_DIR)ft_itoa.c $(STRING_DIR)ft_split.c \
				$(STRING_DIR)ft_strchr.c $(STRING_DIR)ft_strdup.c $(STRING_DIR)ft_striteri.c \
				$(STRING_DIR)ft_strjoin.c $(STRING_DIR)ft_strlcat.c $(STRING_DIR)ft_strlcpy.c \
				$(STRING_DIR)ft_strlen.c $(STRING_DIR)ft_strmapi.c $(STRING_DIR)ft_strncmp.c \
				$(STRING_DIR)ft_strnstr.c $(STRING_DIR)ft_strrchr.c $(STRING_DIR)ft_strtrim.c \
				$(STRING_DIR)ft_substr.c $(STRING_DIR)ft_tolower.c $(STRING_DIR)ft_toupper.c \
				$(STRING_DIR)ft_atol.c
				
LIST =			$(LIST_DIR)ft_lstadd_back.c $(LIST_DIR)ft_lstadd_front.c $(LIST_DIR)ft_lstclear.c \
 				$(LIST_DIR)ft_lstdelone.c $(LIST_DIR)ft_lstiter.c $(LIST_DIR)ft_lstmap.c \
				$(LIST_DIR)ft_lstnew.c $(LIST_DIR)ft_lstsize.c

PRINT =			$(PRINT_DIR)ft_printf.c $(PRINT_DIR)ft_printf_utils.c $(PRINT_DIR)ft_printf_utils_sec.c \

GNL =			$(GNL_DIR)get_next_line.c $(GNL_DIR)get_next_line_utils.c

CFILES = $(VERIFICATION) $(MEMORY) $(STRING) $(FILE) $(LIST) $(PRINT) $(GNL)

OBJS = $(patsubst $(SRC_DIR)%.c, $(OBJS_DIR)/%.o, $(CFILES))

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "Created library"
	
$(OBJS_DIR)/%.o: $(SRC_DIR)/%.c
	@$(MKDIR) $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

clean:
	@rm -rf $(OBJS_DIR)
	@echo "Cleaned all objects"
	
fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned library"
	
re: fclean all

.PHONY: all clean fclean re