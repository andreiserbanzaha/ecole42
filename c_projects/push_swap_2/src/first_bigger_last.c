/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_bigger_last.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:49:10 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:49:11 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		first_bigger_last(t_swap *list)
{
	int		nbr;

	nbr = list->nbr;
	while (list->next)
		list = list->next;
	if (nbr >= list->nbr)
		return (1);
	return (0);
}
