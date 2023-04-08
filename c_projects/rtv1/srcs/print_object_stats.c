/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_object_stats.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 15:38:59 by azaha             #+#    #+#             */
/*   Updated: 2016/03/24 16:42:24 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	print_object_stats(t_object object)
{
	ft_putstr(object.type);
	ft_putchar('\n');
	ft_putnbr(object.sphere.coord.x);
	ft_putchar('\n');
	ft_putnbr(object.sphere.coord.y);
	ft_putchar('\n');
	ft_putnbr(object.sphere.coord.z);
	ft_putchar('\n');
}
