# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/09 12:24:25 by rgareti-          #+#    #+#              #
#    Updated: 2025/08/17 17:57:02 by rgareti-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program or library

NAME = libftprintf.a

# Flags and Compilers

CC = cc
CFLAGS = -Wall -Werror -Wextra

# Directories

SRCDIR = .
INCDIR = .

# Archives .c

SRCS =	$(SRCDIR)/ft_printf.c\
	$(SRCDIR)/ft_print_hex.c\
	$(SRCDIR)/ft_print_char.c\
	$(SRCDIR)/ft_print_str.c\
	$(SRCDIR)/ft_print_nbr.c\
	$(SRCDIR)/ft_handle_specifier.c\
	$(SRCDIR)/ft_putchar.c\
	$(SRCDIR)/ft_print_ptr.c\
	$(SRCDIR)/ft_parse.c\
	$(SRCDIR)/ft_print_unsigned.c\

# Archives .o

OBJS = $(SRCS:$(SRCDIR)/%.c=%.o)

# Main

all: $(NAME)

# Main rule

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# .c -> .o

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

# clear

clean:
	rm -f $(OBJS)

# Full clean

fclean: clean
	rm -f $(NAME) 

# restart

re: fclean $(NAME)

.PHONY: all fclean clean re