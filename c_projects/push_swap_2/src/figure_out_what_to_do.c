/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure_out_what_to_do.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:48:59 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:49:00 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		figure_out_what_to_do(t_swap *list)
{
	if (list->pos == (ft_find_last(list))->pos + 1)
		return (2);
	if (first_bigger_second(list))
		return (1);
	if (first_bigger_last(list))
		return (2);
	return (0);
}
