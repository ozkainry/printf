# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozozdemi <ozozdemi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 17:27:36 by ozozdemi          #+#    #+#              #
#    Updated: 2022/11/23 17:13:54 by ozozdemi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a
CC =	cc
CFLAGS =	-Wall -Werror -Wextra
AR =	ar rcs
RM =	rm -rf
SRC =	ft_printf.c \
	ft_pointer.c \
	ft_putnbr.c \

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re

