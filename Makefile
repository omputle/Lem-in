# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mduma <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 14:44:40 by mduma             #+#    #+#              #
#    Updated: 2020/01/24 08:54:46 by omputle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Lem-in
LIBFT = libft/
GNL = Gnl/get_next_line.c
SRCS = src/
CCFL = -Wall -Wextra -Werror -lncurses -ltermcap -L $(LIBFT) -lft

all: $(NAME)

$(NAME):
		@MAKE -C $(LIBFT) re 
		@gcc $(CCFL) $(SRCS)*.c $(GNL) -o $(NAME)

clean:
		@make -C $(LIBFT) clean

fclean:
		@make -C $(LIBFT) fclean
		@/bin/rm -rf $(NAME)

re: fclean all
