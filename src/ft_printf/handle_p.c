/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 18:48:31 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 15:32:52 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void			handle_ptr_p(va_list *ap, t_info *flag)
{
	unsigned long	ptr;

	flag->sep = 0;
	flag->mod = z;
	ptr = handle_unsigned_va_arg(flag, ap);
	if (!ptr && flag->got_prec && !flag->prec)
	{
		if (!flag->width)
			flag->ret_printf++;
		if (flag->width > 1 && !flag->minus)
		{
			ft_putnchar(' ', flag->width - 2);
			flag->ret_printf += flag->width - 1;
		}
		ft_putstr("0x");
		flag->ret_printf++;
		if (flag->width > 1 && flag->minus)
		{
			ft_putnchar(' ', flag->width - 2);
			flag->ret_printf += flag->width - 1;
		}
		return ;
	}
	flag_handle(flag, ptr, BASE_16_L, "0x");
}
