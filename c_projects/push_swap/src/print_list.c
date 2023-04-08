/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 13:22:00 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 11:31:44 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_lst *list)
{
	t_lst	*aux;

	aux = list;
	while (list)
	{
		ft_putnbr(list->nbr);
		ft_putchar(' ');
		list = list->next;
	}
	ft_putchar('\n');
}
