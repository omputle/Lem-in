# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mduma <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 14:44:40 by mduma             #+#    #+#              #
#    Updated: 2020/05/04 08:54:46 by omputle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Lem-in
LIBFT = libft/*.c
GNL = get_next_line/get_next_line.c
SRCS = src/*.c
CCFL = $(LIBFT)

all: $(NAME)

$(NAME):
		gcc $(SRCS) $(LIBFT) $(GNL) lemin.c -o $(NAME)

clean:
		@make -C $(LIBFT) clean

fclean:
		@/bin/rm -rf $(NAME)

re: fclean all
