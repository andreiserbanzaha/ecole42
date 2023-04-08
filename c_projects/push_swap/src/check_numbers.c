/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:59:05 by azaha             #+#    #+#             */
/*   Updated: 2016/02/08 17:55:59 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		check_number(char *str, t_lst *l_a)
{
	int		nbr;

	nbr = ft_atoi(str);
	if (!ft_strequ(ft_itoa(nbr), str))
		error_exit();
	while (l_a)
	{
		if (l_a->nbr == nbr)
			error_exit();
		l_a = l_a->next;
	}
	return (nbr);
}
