/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 20:05:44 by azaha             #+#    #+#             */
/*   Updated: 2015/12/16 11:14:31 by vplaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	init_elem(t_elem *elem)
{
	elem->i = 0;
	elem->j = 0;
	elem->pp = 0;
	elem->index = 0;
	elem->hash = 1;
}
