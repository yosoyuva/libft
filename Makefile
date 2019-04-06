# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 16:31:49 by ymehdi            #+#    #+#              #
#    Updated: 2019/04/06 13:40:26 by ymehdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

all:
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)

compile:
	gcc -Wall -Werror -Wextra main.c -L. -lft

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
