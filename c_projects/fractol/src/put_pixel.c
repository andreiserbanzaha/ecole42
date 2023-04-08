/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 11:16:25 by azaha             #+#    #+#             */
/*   Updated: 2016/01/17 11:16:27 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_pixel(char *string, char color, char rgb)
{
	if (rgb == 'w')
	{
		string[0] = color;
		string[1] = color;
		string[2] = color;
	}
	else if (rgb == 'r')
		string[2] = color;
	else if (rgb == 'g')
		string[1] = color;
	else if (rgb == 'b')
		string[0] = color;
}
