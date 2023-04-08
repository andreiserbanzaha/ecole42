/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compute_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:50:17 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 13:19:55 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	void	do_this(t_swap **l_a, t_swap **l_b, t_flag *flag)
{
	if (figure_out_what_to_do(*l_a))
	{
		if (figure_out_what_to_do(*l_a) == 1)
		{
			ft_swap(l_a);
			ft_append_op(*l_a, *l_b, "sa", flag);
		}
		else
		{
			ft_rotate(l_a);
			ft_append_op(*l_a, *l_b, "ra", flag);
		}
	}
	else
	{
		ft_push(l_a, l_b);
		ft_append_op(*l_a, *l_b, "pb", flag);
		if (!first_bigger_second(*l_b) && (*l_b)->next)
		{
			ft_swap(l_b);
			ft_append_op(*l_a, *l_b, "sb", flag);
		}
	}
}

t_swap			*ft_compute_list(t_swap *l_a, t_flag flag)
{
	t_swap	*l_b;

	l_b = NULL;
	ft_move_max(&l_a, l_b, &flag);
	while (!ft_is_sorted(l_a) || l_b != NULL)
	{
		while (!ft_is_sorted(l_a))
		{
			do_this(&l_a, &l_b, &flag);
		}
		if (l_b)
		{
			ft_push(&l_b, &l_a);
			ft_append_op(l_a, l_b, "pa", &flag);
			if (l_b && !first_bigger_second(l_b) && l_b->next)
			{
				ft_swap(&l_b);
				ft_append_op(l_a, l_b, "sb", &flag);
			}
		}
	}
	return (l_a);
}
