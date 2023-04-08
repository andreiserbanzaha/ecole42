/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:50:24 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 12:51:49 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_index(t_swap *list)
{
	while (list)
	{
		ft_putnbr(list->pos);
		list = list->next;
		ft_putchar(' ');
	}
	ft_putchar('\n');
}

t_swap	*new_node(int nbr)
{
	t_swap	*new;

	new = (t_swap*)malloc(sizeof(t_swap));
	if (new)
	{
		new->nbr = nbr;
		new->next = NULL;
		new->pos = -1;
	}
	return (new);
}

void	list_push_back(t_swap **begin_list, int nbr)
{
	t_swap	*list;

	if (*begin_list)
	{
		list = *begin_list;
		while (list->next)
			list = list->next;
		list->next = new_node(nbr);
	}
	else
		*begin_list = new_node(nbr);
}

void	ft_set_position(t_swap *list, int n)
{
	int		i;
	t_swap	*minim;
	t_swap	*aux;

	i = 0;
	minim = list;
	while (i < n)
	{
		aux = list;
		while (aux)
		{
			if (minim->pos != -1 && aux->pos == -1)
				minim = aux;
			if (aux->pos == -1 && aux->nbr < minim->nbr)
				minim = aux;
			aux = aux->next;
		}
		minim->pos = i;
		i++;
	}
}

t_swap	*list_construct(int argc, char **argv, t_flag flag)
{
	int		i;
	int		nbr;
	t_swap	*list;

	i = 1;
	if (ft_strcmp(argv[1], "-v") == 0)
		i = 2;
	list = NULL;
	while (i < argc)
	{
		nbr = validate_number(argv[i], list);
		list_push_back(&list, nbr);
		i++;
	}
	if (list)
		ft_set_position(list, argc - 1 - flag.flag);
	return (list);
}
