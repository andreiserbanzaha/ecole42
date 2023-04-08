/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_x_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 09:27:04 by azaha             #+#    #+#             */
/*   Updated: 2016/01/21 21:56:01 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		assign_llx(va_list *ap, t_print *elem, t_flags flags)
{
	unsigned long long nbr;

	nbr = va_arg(*ap, unsigned long long);
	if (nbr == 0 && flags.dot == 1)
		elem->text = ft_strdup("");
	else
		elem->text = ft_ulltoa_base(nbr, 16, "0123456789abcdef");
	if (nbr != 0)
		store_x_hash(elem, flags);
	return (get_width_precision(elem, flags));
}

int		assign_lx(va_list *ap, t_print *elem, t_flags flags)
{
	unsigned long nbr;

	nbr = va_arg(*ap, unsigned long);
	if (nbr == 0 && flags.dot == 1)
		elem->text = ft_strdup("");
	else
		elem->text = ft_ulltoa_base(nbr, 16, "0123456789abcdef");
	if (nbr != 0)
		store_x_hash(elem, flags);
	return (get_width_precision(elem, flags));
}

int		assign_hhx(va_list *ap, t_print *elem, t_flags flags)
{
	unsigned char nbr;

	nbr = (char)va_arg(*ap, unsigned int);
	if (nbr == 0 && flags.dot == 1)
		elem->text = ft_strdup("");
	else
		elem->text = ft_ulltoa_base(nbr, 16, "0123456789abcdef");
	if (nbr != 0)
		store_x_hash(elem, flags);
	return (get_width_precision(elem, flags));
}

int		assign_hx(va_list *ap, t_print *elem, t_flags flags)
{
	unsigned short nbr;

	nbr = (short)va_arg(*ap, unsigned int);
	if (nbr == 0 && flags.dot == 1)
		elem->text = ft_strdup("");
	else
		elem->text = ft_ulltoa_base(nbr, 16, "0123456789abcdef");
	if (nbr != 0)
		store_x_hash(elem, flags);
	return (get_width_precision(elem, flags));
}

int		assign_x(va_list *ap, t_print *elem, t_flags flags)
{
	unsigned int nbr;

	nbr = va_arg(*ap, unsigned int);
	if (nbr == 0 && flags.dot == 1)
		elem->text = ft_strdup("");
	else
		elem->text = ft_ulltoa_base(nbr, 16, "0123456789abcdef");
	if (nbr != 0)
		store_x_hash(elem, flags);
	return (get_width_precision(elem, flags));
}
