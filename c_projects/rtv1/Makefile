# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaha <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/21 20:25:24 by azaha             #+#    #+#              #
#    Updated: 2016/03/24 16:07:19 by azaha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rtv1

SRCS = srcs/*.c

OBJ = *.o

INC = includes/

FLAGS = -Wall -Wextra -Werror

MLX = -Lincludes/minilibx_macos -lmlx -framework OpenGL -framework AppKit

LIBFT = -L libft/ -lft

all : $(NAME)

$(NAME) :
	@make -C libft/
	@gcc $(FLAGS) -I $(INC) -c $(SRCS)
	@gcc $(OBJ) $(MLX) $(LIBFT) -o $(NAME)

clean :
	@make -C libft/ clean
	@rm -f $(OBJ)

fclean : clean
	@make -C libft/ fclean
	@rm -f $(NAME)

re : fclean all
