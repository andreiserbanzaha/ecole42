/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 11:15:54 by azaha             #+#    #+#             */
/*   Updated: 2016/01/17 11:15:55 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	mouse_zoom(int button, int x, int y, t_env *e)
{
	if (button == 4)
	{
		e->origin_x = x - (x - e->origin_x) * 1.5;
		e->origin_y = y - (y - e->origin_y) * 1.5;
		e->zoom *= 1.5;
		expose_hook(e);
	}
	if (button == 5)
	{
		e->origin_x = x - (x - e->origin_x) / 1.5;
		e->origin_y = y - (y - e->origin_y) / 1.5;
		e->zoom /= 1.5;
		expose_hook(e);
	}
}

int			mouse_hook(int button, int x, int y, t_env *e)
{
	mouse_zoom(button, x, y, e);
	return (0);
}
