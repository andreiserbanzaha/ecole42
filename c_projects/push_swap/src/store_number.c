/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 13:09:58 by azaha             #+#    #+#             */
/*   Updated: 2016/02/08 17:55:59 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	store_number(t_lst **l_a, int nbr)
{
	t_lst	*aux;

	if (*l_a)
	{
		aux = *l_a;
		while (aux->next)
			aux = aux->next;
		aux->next = new_node(nbr);
	}
	else
		*l_a = new_node(nbr);
}
