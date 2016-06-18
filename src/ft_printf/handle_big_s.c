/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_big_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 22:06:45 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 15:14:40 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <wchar.h>

static void		get_wlen(t_info *flag, t_handle *bigs, wchar_t *wstr)
{
	size_t		tmp_utf8;

	if (!wstr)
		bigs->len = 6;
	else
	{
		while (*wstr)
		{
			tmp_utf8 = bigs->len;
			count_utf8(*wstr, &bigs->len);
			if (flag->prec > 0 && (int)bigs->len > flag->prec)
			{
				bigs->len -= bigs->len - tmp_utf8;
				break ;
			}
			wstr++;
		}
	}
}

static void		print_wstring(t_info *flag, t_handle *bigs, wchar_t *wstr)
{
	size_t		check_utf8;
	size_t		tmp_utf8;

	check_utf8 = 0;
	if (!wstr)
		ft_putnstr("(null)", bigs->prec);
	else
	{
		while (*wstr)
		{
			tmp_utf8 = check_utf8;
			count_utf8(*wstr, &check_utf8);
			if (check_utf8 > bigs->prec)
			{
				flag->ret_printf -= bigs->prec - tmp_utf8;
				break ;
			}
			handle_utf8(*wstr);
			wstr++;
		}
	}
}

void			handle_wstring_bigs(va_list *ap, t_info *flag)
{
	wchar_t		*wstr;
	t_handle	ws;

	wstr = va_arg(*ap, wchar_t *);
	ws.len = 0;
	get_wlen(flag, &ws, wstr);
	get_prec_s(flag, &ws);
	get_width_s(flag, &ws);
	flag->ret_printf += ws.width + ws.prec;
	if (ws.width && !flag->minus)
		flag->zero ? ft_putnchar('0', ws.width) : ft_putnchar(' ', ws.width);
	print_wstring(flag, &ws, wstr);
	if (ws.width && flag->minus)
		ft_putnchar(' ', ws.width);
}
