/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 14:03:24 by azaha             #+#    #+#             */
/*   Updated: 2016/02/09 14:02:21 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef	struct		s_lst
{
	int				nbr;
	int				pos;
	struct s_lst	*next;
}					t_lst;

t_lst				*get_numbers(int argc, char **argv);
int					check_number(char *str, t_lst *l_a);
void				store_number(t_lst **l_a, int nbr);
void				set_position(t_lst *l_a, int n);
t_lst				*new_node(int nbr);
void				print_list(t_lst *list);
void				error_exit(void);
void				swap(t_lst **list);
void				rotate(t_lst **list);
void				reverse_rotate(t_lst **list);
void				push(t_lst **l1, t_lst **l2);
void				push_swap(t_lst **l_a);
int					check_if_sorted(t_lst *list);
void				put_min_from_a_in_b(t_lst **l_a, t_lst **l_b);


#endif
