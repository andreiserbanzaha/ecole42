/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_to.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:49:53 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:49:54 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		has_to(t_swap *aux)
{
	t_swap	*tmp;
	t_swap	*tmp2;

	tmp = ft_find_last(aux);
	ft_rotate_inverse(&aux);
	tmp2 = ft_find_last(aux);
	g_moves -= 2;
	ft_rotate(&aux);
	if (tmp2->pos == tmp->pos - 1)
		return (0);
	if (tmp->pos < 3)
		return (0);
	return (1);
}
