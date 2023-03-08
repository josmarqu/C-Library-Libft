# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:38:05 by josmarqu          #+#    #+#              #
#    Updated: 2023/03/08 12:38:06 by josmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library name
NAME = libft.a

# Source files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_striteri.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# Bonus source files
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c

# Object files
OBJS = $(SRCS:.c=.o)

# Bonus object files
BONUS_OBJS = $(BONUS:.c=.o)

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

# Rule for adding the bonus files to the library
bonus: $(BONUS_OBJS)
	@ar rc $(NAME) $(BONUS_OBJS)
	@echo "Bonus added"

# PHONY rules to avoid conflicts with files
.PHONY: clean fclean re test test_bonus

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

# Rule for testing the library with the bonus files
test_bonus: bonus
	@$(CC) $(CFLAGS) ft_test_bonus.c -L. -lft -o test_bonus
	@./test_bonus
	@echo "Test done"
