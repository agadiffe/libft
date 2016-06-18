/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 17:13:40 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 15:19:49 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <wchar.h>

void			handle_char_c(va_list *ap, t_info *flag)
{
	int		width;

	if (flag->mod == l)
		handle_wchar_bigc(ap, flag);
	else
	{
		if ((width = flag->width - 1) < 0)
			width = 0;
		if (width && !flag->minus)
			flag->zero ? ft_putnchar('0', width) : ft_putnchar(' ', width);
		ft_putchar(va_arg(*ap, int));
		if (width && flag->minus)
			ft_putnchar(' ', width);
		flag->ret_printf += width + 1;
	}
}

void			handle_wchar_bigc(va_list *ap, t_info *flag)
{
	wint_t		wchar;
	size_t		ret_utf8;

	(void)*flag;
	ret_utf8 = 0;
	wchar = va_arg(*ap, wint_t);
	count_utf8(wchar, &ret_utf8);
	handle_utf8(wchar);
	flag->ret_printf += ret_utf8;
}
