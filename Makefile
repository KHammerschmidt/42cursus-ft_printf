# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khammers <khammers@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 08:35:19 by khammers          #+#    #+#              #
#    Updated: 2021/09/16 12:12:28 by khammers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c ft_conversion.c ft_print_char.c ft_print_string.c \
	ft_print_hexa.c ft_print_int.c ft_print_unsigned_int.c ft_itoa_unsigned.c

LIBFT_OBJ = ./libft/*.o

OBJECTS = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJECTS) LIBFT_OBJECTS
	ar rc $(NAME) $(OBJECTS) $(LIBFT_OBJ)

LIBFT_OBJECTS:
	make -C ./libft

clean:
	rm -f $(OBJECTS)
	make clean -C ./libft

fclean: clean
	rm -f $(NAME)
	make fclean -C ./libft

re: fclean all
