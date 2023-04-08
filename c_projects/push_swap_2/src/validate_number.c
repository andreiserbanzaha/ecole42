/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:50:02 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:50:04 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		validate_number(char *str, t_swap *list)
{
	int		i;
	int		nbr;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] == '-')
			i++;
		if (!ft_isdigit(str[i]))
			error_exit();
		i++;
	}
	nbr = ft_atoi(str);
	while (list)
	{
		if (nbr == list->nbr)
			error_exit();
		list = list->next;
	}
	return (nbr);
}
