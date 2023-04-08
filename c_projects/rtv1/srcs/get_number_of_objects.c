/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number_of_objects.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 15:48:44 by azaha             #+#    #+#             */
/*   Updated: 2016/03/24 16:42:27 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	get_number_of_objects(t_env *e, int fd)
{
	char	*line;
	int		number_of_objects;

	line = NULL;
	number_of_objects = 0;
	while (get_next_line(fd, &line))
		number_of_objects++;
	e->object_count = number_of_objects;
}
