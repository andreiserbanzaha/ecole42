/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 20:32:32 by azaha             #+#    #+#             */
/*   Updated: 2016/03/25 18:38:35 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include "libft.h"
# include "get_next_line.h"
# include "minilibx_macos/mlx.h"
# include <math.h>
# include <fcntl.h>

# define WIN_WIDTH 640
# define WIN_HEIGHT 480

typedef	struct		s_color
{
	int		r;
	int		b;
	int		g;
	int		transparency;
}					t_color;

typedef	struct		s_vec3
{
	double	x;
	double	y;
	double	z;
}					t_vec3;

typedef	struct		s_vec2
{
	double	x;
	double	y;
}					t_vec2;

typedef	struct		s_vector
{
	t_vec3	ray;
//	t_vec3	light;
	t_vec3	direction;
	t_vec2	vertices;
}					t_vector;

typedef	struct		s_sphere
{
	int		radius;
	t_vec3	coord;
}					t_sphere;

typedef	struct		s_object
{
	char		*type;
//	t_cone		cone;
//	t_plane		plane;
	t_sphere	sphere;
//	t_cylinder	cylinder;
	t_color		color;
}					t_object;

typedef	struct		s_env
{
	void		*mlx;
	void		*win;
	int			object_count;
	t_object	*object;
}					t_env;

void				print_error_and_exit(void);
void				rtv1(char *scene_file);	
void				init_env(t_env *e, char *scene_file);
void				get_number_of_objects(t_env *e, int fd);
void				store_object(t_env *e, char **this_object, int index);
void				store_sphere(t_env *e, char **this_object, int index);
void				print_object_stats(t_object object);
int					key_hook(int keycode, t_env *e);
int					expose_hook(t_env *e);

#endif
