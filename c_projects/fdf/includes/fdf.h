/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 11:14:27 by azaha             #+#    #+#             */
/*   Updated: 2016/01/13 19:25:24 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "get_next_line.h"
# include "minilib_macos/mlx.h"
# include <stdio.h>
# include <math.h>
# include <fcntl.h>

# define WIN_HEIGHT 900
# define WIN_WIDTH 1600
# define ZOOM 0.05
# define OFFSET 10
# define BLUE 0x0000FF
# define RED 0xFF0000
# define YELLOW 0xFFFF00
# define WHITE 0xFFFFFF

typedef	struct	s_point
{
	float			x;
	float			y;
	float			z;
	float			w_x;
	float			w_y;
	unsigned char	color_scale;
}				t_point;

typedef	struct	s_map_config
{
	int			rows;
	int			columns;
	char		color;
	float		step;
	float		height_scale;
	float		zoom;
	float		min_height;
	float		max_height;
	float		x_offset;
	float		y_offset;
}				t_map_config;

typedef	struct	s_env
{
	void			*mlx;
	void			*win;
	char			*file;
	t_point			**map;
	t_map_config	*map_config;
}				t_env;

t_point			**allocate_points(int rows, int columns);
void			draw(t_env *e);
void			draw_line(t_env *e, t_point a, t_point b);
void			exit_program(void);
int				expose_hook(t_env *e);
void			get_coordinates(t_env *e);
char			*get_name(char *path);
int				get_next_line(int const fd, char **line);
void			get_rows_and_columns(t_env *e);
void			init_env(t_env *e, int argc, char **argv);
void			calculate_axonometry_coords(t_env *e);
float			get_step(int rows, int columns);
int				key_hook(int keycode, t_env *e);
void			reset_configuration(t_env *e);
void			get_max_and_min_height(t_env *e);
int				get_color(char color, unsigned char color_scale);
void			get_color_scale(t_env *e);
#endif
