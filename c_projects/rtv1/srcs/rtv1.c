/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 11:15:32 by azaha             #+#    #+#             */
/*   Updated: 2016/03/25 13:39:04 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	rtv1(char *scene_file)
{
	t_env	*e;

	e = (t_env*)malloc(sizeof(t_env));
	init_env(e, scene_file);
	mlx_expose_hook(e->win, expose_hook, e);
	mlx_key_hook(e->win, key_hook, e);
	mlx_loop(e->mlx);
}
