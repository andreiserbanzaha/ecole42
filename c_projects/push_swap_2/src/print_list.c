/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:51:04 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:51:18 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_swap *list)
{
	while (list)
	{
		ft_putnbr(list->nbr);
		list = list->next;
		ft_putchar(' ');
	}
	ft_putchar('\n');
}
