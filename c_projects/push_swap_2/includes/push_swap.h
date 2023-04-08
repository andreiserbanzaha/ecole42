/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 13:20:52 by azaha             #+#    #+#             */
/*   Updated: 2016/02/12 13:21:45 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

int					g_moves;

typedef struct		s_swap
{
	struct s_swap	*next;
	int				nbr;
	int				pos;
}					t_swap;

typedef struct		s_flag
{
	int				flag;
	int				first;
}					t_flag;

void				error_exit(void);
t_swap				*new_node(int nbr);
void				list_push_back(t_swap **begin_list, int nbr);
void				ft_set_position(t_swap *list, int n);
t_swap				*list_construct(int argc, char **argv, t_flag flag);
int					validate_number(char *str, t_swap *list);
void				print_list(t_swap *list);
void				print_index(t_swap *list);
void				ft_swap(t_swap **list);
void				ft_rotate(t_swap **list);
void				ft_rotate_inverse(t_swap **list);
void				ft_push(t_swap **l1, t_swap **l2);
int					figure_out_what_to_do(t_swap *list);
int					first_bigger_last(t_swap *list);
int					first_bigger_second(t_swap *list);
void				ft_append_op(t_swap *l_a, t_swap *l_b, const char *op,
		t_flag *flag);
void				ft_compute_flag(t_flag *flag, char **argv);
t_swap				*ft_compute_list(t_swap *l_a, t_flag flag);
t_swap				*ft_find_last(t_swap *list);
int					ft_is_sorted(t_swap *list);
void				ft_move_max(t_swap **list, t_swap *l_b, t_flag *flag);
int					has_to(t_swap *aux);
void				print_list(t_swap *list);

#endif
