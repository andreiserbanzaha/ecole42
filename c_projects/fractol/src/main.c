/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 11:15:40 by azaha             #+#    #+#             */
/*   Updated: 2016/01/17 11:15:42 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int ac, char **av)
{
	t_env	*e;

	e = (t_env*)malloc(sizeof(t_env));
	if (ac != 2)
		print_error_and_exit();
	initialize_environment(e, av[1]);
	mlx_expose_hook(e->win, expose_hook, e);
	mlx_key_hook(e->win, key_hook, e);
	mlx_hook(e->win, MOTIONNOTIFY, POINTERMOTIONMASK, motion_hook, e);
	mlx_mouse_hook(e->win, mouse_hook, e);
	mlx_loop(e->mlx);
	return (0);
}
