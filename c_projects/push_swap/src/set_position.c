/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:13:18 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 11:31:46 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_position(t_lst *list, int n)
{
	int		index;
	t_lst	*minim;
	t_lst	*aux;

	index = 0;
	minim = list;
	while (index < n)
	{
		aux = list;
		while (aux)
		{
			if (minim->pos != -1 && aux->pos == -1)
				minim = aux;
			if (aux->pos == -1 && aux->nbr < minim->nbr)
				minim = aux;
			aux = aux->next;
		}
		minim->pos = index;
		index++;
	}
}
