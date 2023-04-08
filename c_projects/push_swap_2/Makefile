# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaha <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/25 15:00:03 by azaha             #+#    #+#              #
#    Updated: 2016/01/25 15:12:16 by azaha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = src/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	gcc -Wall -Wextra -Werror -I libft/ -c $(SRC)
	gcc -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	/bin/rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft/libft.a

re: fclean all
