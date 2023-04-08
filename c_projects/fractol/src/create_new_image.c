/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_new_image.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 11:13:56 by azaha             #+#    #+#             */
/*   Updated: 2016/01/17 11:13:58 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	create_new_image(t_env *e)
{
	int		*bits;
	int		*size_line;
	int		endian;

	e->img = mlx_new_image(e->mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	bits = malloc(sizeof(int));
	*bits = 32;
	size_line = malloc(sizeof(int));
	e->string = mlx_get_data_addr(e->img, bits, size_line, &endian);
}
