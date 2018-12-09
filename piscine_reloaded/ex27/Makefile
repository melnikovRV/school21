# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 07:01:42 by nsabre-c          #+#    #+#              #
#    Updated: 2018/11/22 07:01:44 by nsabre-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c ft_putstr.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		gcc -o $(NAME) ft_display_file.o ft_putstr.o


clean:
		/bin/rm -f ft_display_file.o ft_putstr.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
