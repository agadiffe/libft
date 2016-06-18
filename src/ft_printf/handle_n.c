/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 17:44:26 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/18 14:57:17 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			handle_n(va_list *ap, t_info *flag)
{
	if (flag->mod == j)
		*va_arg(*ap, intmax_t *) = (intmax_t)flag->ret_printf;
	else if (flag->mod == hh)
		*va_arg(*ap, signed char *) = (signed char)flag->ret_printf;
	else if (flag->mod == h)
		*va_arg(*ap, short *) = (short)flag->ret_printf;
	else if (flag->mod == l)
		*va_arg(*ap, long *) = (long)flag->ret_printf;
	else if (flag->mod == ll)
		*va_arg(*ap, long long *) = (long long)flag->ret_printf;
	else if (flag->mod == z)
		*va_arg(*ap, size_t *) = (size_t)flag->ret_printf;
	else
		*va_arg(*ap, int *) = (int)flag->ret_printf;
}
