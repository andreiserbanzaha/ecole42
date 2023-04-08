/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:21:43 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 14:53:33 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_lst **list)
{
	t_lst	*aux;

	aux = (*list)->next;
	(*list)->next = (*list)->next->next;
	aux->next = *list;
	*list = aux;
}

void	rotate(t_lst **list)
{
	t_lst	*aux;
	t_lst	*parse;

	aux = *list;
	(*list) = (*list)->next;
	parse = *list;
	while (parse->next)
		parse = parse->next;
	parse->next = aux;
	aux->next = NULL;
}

void	reverse_rotate(t_lst **list)
{
	t_lst	*prev;
	t_lst	*parse;

	parse = *list;
	while (parse->next)
	{
		prev = parse;
		parse = parse->next;
	}
	prev->next = NULL;
	parse->next = *list;
	*list = parse;
}

void	push(t_lst **l1, t_lst **l2)
{
	t_lst *aux;

	aux = *l1;
	*l1 = (*l1)->next;
	aux->next = *l2;
	*l2 = aux;
}
