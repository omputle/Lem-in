# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mduma <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 15:37:45 by mduma             #+#    #+#              #
#    Updated: 2019/08/22 17:48:37 by mduma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRCS = *.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f ft_*.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all