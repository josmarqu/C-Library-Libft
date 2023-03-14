# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:38:05 by josmarqu          #+#    #+#              #
#    Updated: 2023/03/14 12:58:48 by josmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library name
NAME = libft.a

# Source files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_striteri.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_free_str_arr.c

# Bonus source files
BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

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
	@ar rcs $(NAME) $(OBJS)
	@echo "Library compiled"
	
# Generate the object files from the source files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Object files created"


# PHONY rules to avoid conflicts with files
.PHONY: clean fclean re bonus test test_bonus

# Clean the object files
clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Object files cleaned"

# Clean the object files and the library
fclean: clean
	@rm -f $(NAME)
	@echo "Library cleaned"

# Clean the object files and the library and compile the library again
re: fclean all
	@echo "Library recompiled"

# Rule for adding the bonus files to the library
bonus: $(BONUS_OBJS)
	@ar rc $(NAME) $(BONUS_OBJS)
	@echo "Bonus added"
