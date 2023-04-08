/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_min_from_a_in_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 12:04:49 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 15:07:16 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	void	move_through_left(t_lst **list, int steps)
{
	int		index;

	index = 0;
	while (index < steps)
	{
		rotate(list);
		ft_putstr("ra ");
		index++;
	}
}

static	void	move_through_right(t_lst **list, int steps)
{
	int		index;

	index = 0;
	while (index < steps)
	{
		reverse_rotate(list);
		ft_putstr("rra ");
		index++;
	}
}

void			put_min_from_a_in_b(t_lst **l_a, t_lst **l_b)
{
	int		steps;
	int		elements;
	t_lst	*min;
	t_lst	*parse;

	min = *l_a;
	parse = *l_a;
	steps = 0;
	elements = 0;
	while (parse)
	{
		if (parse->pos < min->pos)
		{
			min = parse;
			steps += elements - steps;
		}
		elements++;
		parse = parse->next;
	}
	if (steps <= elements / 2)
		move_through_left(l_a, steps);
	else
		move_through_right(l_a, elements - steps);
	push(l_a, l_b);
	ft_putstr("pb ");
}
