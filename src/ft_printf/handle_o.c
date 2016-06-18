/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_o.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 17:10:25 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 15:32:06 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void			handle_octal_o(va_list *ap, t_info *flag)
{
	uintmax_t	nbr;
	size_t		len;

	flag->sep = 0;
	nbr = handle_unsigned_va_arg(flag, ap);
	len = ft_nlen(nbr, 8);
	if (flag->hash && !nbr && flag->got_prec && !flag->prec)
	{
		handle_percent_and_invalid('0', flag);
		return ;
	}
	else if (flag->hash && nbr)
	{
		flag->got_prec = 1;
		if (flag->prec <= (int)len)
			flag->prec = len + 1;
	}
	flag_handle(flag, nbr, BASE_8, NULL);
}

void			handle_octal_long_bigo(va_list *ap, t_info *flag)
{
	flag->mod = l;
	handle_octal_o(ap, flag);
}
