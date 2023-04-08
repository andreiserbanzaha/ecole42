/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:56:11 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 11:14:38 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_lst	*get_numbers(int argc, char **argv)
{
	t_lst	*l_a;
	int		index;
	int		nbr;

	l_a = NULL;
	index = 1;
	while (index < argc)
	{
		nbr = check_number(argv[index], l_a);
		store_number(&l_a, nbr);
		index++;
	}
	if (l_a)
		set_position(l_a, argc - 1);
	return (l_a);
}
