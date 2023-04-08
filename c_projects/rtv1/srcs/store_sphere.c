/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_sphere.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 15:40:29 by azaha             #+#    #+#             */
/*   Updated: 2016/03/24 16:05:09 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	store_sphere(t_env *e, char **this_object, int index)
{
	e->object[index].type = ft_strdup("sphere");
	e->object[index].sphere.coord.x = ft_atoi(this_object[1]);
	e->object[index].sphere.coord.y = ft_atoi(this_object[2]);
	e->object[index].sphere.coord.z = ft_atoi(this_object[3]);
	e->object[index].sphere.radius = ft_atoi(this_object[4]);
}
