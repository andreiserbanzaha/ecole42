/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_object.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 15:33:45 by azaha             #+#    #+#             */
/*   Updated: 2016/03/24 16:42:25 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	store_object(t_env *e, char **this_object, int index)
{
	if (ft_strequ(this_object[0], "sphere"))
		store_sphere(e, this_object, index);
//	if (ft_strequ(this_object[0], "cone"))
//		store_cone(e, this_object);
//	if (ft_strequ(this_object[0], "cylinder"))
//		store_cylinder(e, this_object);
//	if (ft_strequ(this_object[0], "plane"))
//		store_plane(e, this_object);
}
