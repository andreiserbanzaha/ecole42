/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:49:48 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:49:48 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_is_sorted(t_swap *list)
{
	while (list->next)
	{
		if (list->nbr > list->next->nbr)
			return (0);
		list = list->next;
	}
	return (1);
}
