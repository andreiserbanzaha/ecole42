/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 11:15:25 by azaha             #+#    #+#             */
/*   Updated: 2016/01/17 11:15:30 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	movement_key_hook(int keycode, t_env *e)
{
	if (keycode == 126)
	{
		e->origin_y += 200;
		expose_hook(e);
	}
	if (keycode == 125)
	{
		e->origin_y -= 200;
		expose_hook(e);
	}
	if (keycode == 123)
	{
		e->origin_x += 200;
		expose_hook(e);
	}
	if (keycode == 124)
	{
		e->origin_x -= 200;
		expose_hook(e);
	}
}

static void	color_key_hook(int keycode, t_env *e)
{
	if (keycode == 13)
	{
		e->color = 'w';
		expose_hook(e);
	}
	if (keycode == 5)
	{
		e->color = 'g';
		expose_hook(e);
	}
	if (keycode == 11)
	{
		e->color = 'b';
		expose_hook(e);
	}
	if (keycode == 15)
	{
		e->color = 'r';
		expose_hook(e);
	}
}

static void	modify_step(int keycode, t_env *e)
{
	if (keycode == 78)
	{
		if (e->step < 10)
			(e->step)++;
		expose_hook(e);
	}
	if (keycode == 69)
	{
		if (e->step > 1)
			(e->step)--;
		expose_hook(e);
	}
}

int			key_hook(int keycode, t_env *e)
{
	movement_key_hook(keycode, e);
	color_key_hook(keycode, e);
	modify_step(keycode, e);
	if (keycode == 53)
		exit(0);
	if (keycode == 49)
	{
		e->origin_y = WINDOW_HEIGHT / 2;
		e->origin_x = WINDOW_WIDTH / 2;
		e->zoom = 250;
		expose_hook(e);
	}
	return (0);
}
