/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_date_k.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 15:00:22 by agadiffe          #+#    #+#             */
/*   Updated: 2016/06/18 18:22:50 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <time.h>
#include <stdio.h>

void			handle_date_k(va_list *ap, t_info *flag)
{
	char		*date_iso;
	time_t		timestamp;
	int			to_free;
	t_handle	k;

	to_free = 0;
	timestamp = (time_t)va_arg(*ap, uintmax_t);
	date_iso = ctime(&timestamp);
	k.len = date_iso ? 24 : 6;
	if (!date_iso)
	{
		date_iso = ft_strdup("(null)");
		to_free = 1;
	}
	get_prec_s(flag, &k);
	get_width_s(flag, &k);
	flag->ret_printf += k.width + k.prec;
	if (k.width && !flag->minus)
		ft_putnchar(' ', k.width);
	ft_putnstr(date_iso, k.prec);
	if (k.width && flag->minus)
		ft_putnchar(' ', k.width);
	if (to_free)
		ft_strdel(&date_iso);
}
