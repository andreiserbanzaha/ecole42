/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:50:00 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:50:00 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_swap	*l_a;
	t_flag	flag;

	flag.flag = 0;
	flag.first = 0;
	ft_compute_flag(&flag, argv);
	if (argc > 1)
	{
		l_a = list_construct(argc, argv, flag);
		if (l_a)
			l_a = ft_compute_list(l_a, flag);
		if (flag.flag)
		{
			ft_putstr("Number of operations: ");
			ft_putnbr(g_moves);
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
