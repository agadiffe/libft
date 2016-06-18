/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned_va_arg.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 21:53:19 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/15 18:44:22 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t				handle_unsigned_va_arg(t_info *flag, va_list *ap)
{
	if (flag->mod == j)
		return (va_arg(*ap, uintmax_t));
	else if (flag->mod == hh)
		return ((unsigned char)va_arg(*ap, uintmax_t));
	else if (flag->mod == h)
		return ((unsigned short)va_arg(*ap, uintmax_t));
	else if (flag->mod == l)
		return ((unsigned long)va_arg(*ap, uintmax_t));
	else if (flag->mod == ll)
		return ((unsigned long long)va_arg(*ap, uintmax_t));
	else if (flag->mod == z)
		return ((size_t)va_arg(*ap, uintmax_t));
	else
		return ((unsigned int)va_arg(*ap, uintmax_t));
}
