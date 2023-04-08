/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:49:44 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:49:45 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_append_op(t_swap *l_a, t_swap *l_b, const char *op, t_flag *flag)
{
	if (flag->flag == 0)
	{
		if (flag->first == 0)
			flag->first = 1;
		else
			ft_putchar(' ');
		ft_putstr(op);
	}
	else
	{
		ft_putstr("l_a: ");
		print_list(l_a);
		ft_putstr("l_b: ");
		print_list(l_b);
		ft_putstr("Operation: ");
		ft_putendl(op);
		ft_putchar('\n');
	}
}
