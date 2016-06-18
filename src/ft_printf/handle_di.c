/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 16:59:39 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 15:05:31 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static intmax_t	handle_mod_int_di(va_list *ap, t_info *flag)
{
	if (flag->mod == j)
		return (va_arg(*ap, intmax_t));
	else if (flag->mod == hh)
		return ((signed char)va_arg(*ap, intmax_t));
	else if (flag->mod == h)
		return ((short)va_arg(*ap, intmax_t));
	else if (flag->mod == l)
		return ((long)va_arg(*ap, intmax_t));
	else if (flag->mod == ll)
		return ((long long)va_arg(*ap, intmax_t));
	else if (flag->mod == z)
		return ((size_t)va_arg(*ap, intmax_t));
	else
		return ((int)va_arg(*ap, intmax_t));
}

void			handle_int_di(va_list *ap, t_info *flag)
{
	intmax_t	nbr;
	char		*prefix;

	prefix = NULL;
	nbr = handle_mod_int_di(ap, flag);
	if (nbr < 0 || flag->plus || flag->space)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			prefix = "-";
		}
		else if (flag->plus)
			prefix = "+";
		else if (flag->space)
			prefix = " ";
		else
			prefix = "";
	}
	flag_handle(flag, nbr, BASE_10, prefix);
}

void			handle_long_bigd(va_list *ap, t_info *flag)
{
	flag->mod = l;
	handle_int_di(ap, flag);
}
