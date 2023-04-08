/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compute_flag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:49:30 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:49:31 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_compute_flag(t_flag *flag, char **argv)
{
	if (argv[1] && ft_strcmp(argv[1], "-v") == 0)
		flag->flag = 1;
}
