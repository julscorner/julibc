# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmurte <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/02 09:44:28 by julie             #+#    #+#              #
#    Updated: 2017/12/02 10:20:17 by julie            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OPTION = -c

FLAG = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAG) $(OPTION) libft.h *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
