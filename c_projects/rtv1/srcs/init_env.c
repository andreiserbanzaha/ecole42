/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 13:52:22 by azaha             #+#    #+#             */
/*   Updated: 2016/03/25 13:39:37 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	init_env(t_env *e, char *scene_file)
{
	int		fd;
	int		index;
	char	*line;
	char	**this_object;

	line = NULL;
	this_object = NULL;
	index = 0;
	fd = open(scene_file, O_RDONLY);
	if (fd < 0)
		print_error_and_exit();
	get_number_of_objects(e, fd);
	close(fd);
	fd = open(scene_file, O_RDONLY);
	e->object = (t_object*)malloc(sizeof(t_object));
	while (get_next_line(fd, &line))
	{
		this_object = ft_strsplit(line, ' ');
		store_object(e, this_object, index);
		index++;
	}
	e->mlx = mlx_init();
	e->win = mlx_new_window(e->mlx, WIN_WIDTH, WIN_HEIGHT, "rtv1");
}
