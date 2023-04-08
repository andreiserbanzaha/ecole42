/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 13:17:43 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 11:20:13 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_lst	*new_node(int nbr)
{
	t_lst *new;

	new = (t_lst*)malloc(sizeof(t_lst));
	new->nbr = nbr;
	new->next = NULL;
	new->pos = -1;
	return (new);
}
