/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:43:18 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 15:19:12 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_lst **l_a)
{
	t_lst	*l_b;

	l_b = NULL;
	while (!check_if_sorted(*l_a) || l_b != NULL)
	{
		while (!check_if_sorted(*l_a))
		{
			put_min_from_a_in_b(l_a, &l_b);
		}
		while (l_b != NULL)
		{
			push(&l_b, l_a);
			ft_putstr("pa ");
		}
	}
}
