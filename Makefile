# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:38:05 by josmarqu          #+#    #+#              #
#    Updated: 2023/02/14 15:39:44 by josmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library name
NAME = libft.a

# Source files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# Object files
OBJS = $(SRCS:.c=.o)

# Compiler
CC = gcc

# Flags
CFLAGS = -Wall -Wextra -Werror

# Rules

# Call the rule $(NAME)
all: $(NAME)
	@echo "Library created"

# Compile the object files to create the library with the name set in the variable NAME
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "Library compiled"
	
# Generate the object files from the source files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Object files created"
# PHONY rules to avoid conflicts with files
.PHONY: clean fclean re test

# Clean the object files
clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned"

# Clean the object files and the library
fclean: clean
	@rm -f $(NAME)
	@echo "Library cleaned"

# Clean the object files and the library and compile the library again
re: fclean all
	@echo "Library recompiled"

# Rule for testing the library
test: $(NAME)
	@$(CC) $(CFLAGS) ft_test.c -L. -lft -o test
	@./test
	@echo "Test done"
