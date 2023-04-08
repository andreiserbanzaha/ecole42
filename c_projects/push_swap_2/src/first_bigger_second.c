/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_bigger_second.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:49:04 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:49:05 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		first_bigger_second(t_swap *list)
{
	if (list->next && list->nbr > list->next->nbr)
		return (1);
	return (0);
}
