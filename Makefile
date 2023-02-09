# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:38:05 by josmarqu          #+#    #+#              #
#    Updated: 2023/02/09 17:29:40 by josmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library name
NAME = libft.a

# Source files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
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
	@echo "Compiling objects"
	@ar rc $(NAME) $(OBJS)

# Generate the object files from the source files
%.o: %.c
	@echo "Generating object files"
	@$(CC) $(CFLAGS) -c $< -o $@

# PHONY rules to avoid conflicts with files
.PHONY: clean fclean re

# Clean the object files
clean:
	@echo "Cleaning object files"
	@rm -f $(OBJS)

# Clean the object files and the library
fclean: clean
	@echo "Cleaning library"
	@rm -f $(NAME)

# Clean the object files and the library and compile the library again
re: fclean all
