/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:50:09 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:59:29 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	element_second_half(t_swap **list, t_swap *l_b, t_flag *flag,
		int max)
{
	while ((ft_find_last(*list))->nbr != max)
	{
		ft_rotate_inverse(list);
		ft_append_op(*list, l_b, "rra", flag);
	}
	if (has_to(*list))
	{
		ft_rotate_inverse(list);
		ft_append_op(*list, l_b, "rra", flag);
	}
}

void		ft_move_max(t_swap **list, t_swap *l_b, t_flag *flag)
{
	int		max;
	int		poz;
	t_swap	*aux;
	int		i;

	max = (*list)->nbr;
	poz = 1;
	i = 1;
	aux = *list;
	while (aux)
	{
		aux = aux->next;
		i++;
		if (aux && aux->nbr > max)
		{
			max = aux->nbr;
			poz = i;
		}
	}
	if (poz > i / 2)
		element_second_half(list, l_b, flag, max);
}
