/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:51:09 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 13:50:28 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		check_if_sorted(t_lst *list)
{
	while (list->next)
	{
		if (list->pos > list->next->pos)
			return (0);
		list = list->next;
	}
	return (1);
}
