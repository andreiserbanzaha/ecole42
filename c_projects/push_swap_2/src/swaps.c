/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:50:20 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:50:21 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_swap **list)
{
	t_swap	*aux;

	aux = (*list)->next;
	(*list)->next = ((*list)->next)->next;
	aux->next = *list;
	*list = aux;
	g_moves++;
}

void	ft_rotate(t_swap **list)
{
	t_swap	*aux;
	t_swap	*it;

	aux = *list;
	(*list) = (*list)->next;
	aux->next = NULL;
	it = *list;
	while (it->next)
		it = it->next;
	it->next = aux;
	g_moves++;
}

void	ft_rotate_inverse(t_swap **list)
{
	t_swap	*aux;
	t_swap	*it;

	it = *list;
	while (it->next)
	{
		aux = it;
		it = it->next;
	}
	aux->next = NULL;
	it->next = *list;
	*list = it;
	g_moves++;
}

void	ft_push(t_swap **l1, t_swap **l2)
{
	t_swap	*aux;

	aux = *l1;
	*l1 = (*l1)->next;
	aux->next = *l2;
	*l2 = aux;
	g_moves++;
}
