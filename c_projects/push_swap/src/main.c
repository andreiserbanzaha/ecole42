/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:53:41 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 15:00:39 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_lst	*l_a;

	if (argc > 1)
	{
		l_a = get_numbers(argc, argv);
		push_swap(&l_a);
		ft_putchar('\n');
		print_list(l_a);
	}
	else
		ft_putchar('\n');
	return (0);
}
