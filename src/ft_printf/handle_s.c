/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 20:53:15 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 15:35:37 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void			handle_string_s(va_list *ap, t_info *flag)
{
	char		*str;
	int			to_free;
	t_handle	s;

	to_free = 0;
	if (flag->mod == l)
		handle_wstring_bigs(ap, flag);
	else
	{
		if (!(str = va_arg(*ap, char *)))
		{
			str = ft_strdup("(null)");
			to_free = 1;
		}
		s.len = ft_strlen(str);
		get_prec_s(flag, &s);
		get_width_s(flag, &s);
		flag->ret_printf += s.width + s.prec;
		if (s.width && !flag->minus)
			flag->zero ? ft_putnchar('0', s.width) : ft_putnchar(' ', s.width);
		flag->got_prec ? ft_putnstr(str, s.prec) : ft_putstr(str);
		if (s.width && flag->minus)
			ft_putnchar(' ', s.width);
		to_free ? ft_strdel(&str) : 0;
	}
}
