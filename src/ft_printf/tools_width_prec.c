/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_width_prec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 17:36:05 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 14:28:10 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void			get_prec_s(t_info *flag, t_handle *s)
{
	if (flag->got_prec && flag->prec < (int)s->len)
		s->prec = flag->prec;
	else if (flag->got_prec && !flag->prec)
		s->prec = 0;
	else
		s->prec = s->len;
}

void			get_width_s(t_info *flag, t_handle *s)
{
	if (flag->got_prec && flag->width > flag->prec)
		s->width = flag->width - s->prec;
	else if (flag->got_prec && !flag->prec)
		s->width = flag->width;
	else if (flag->width > (int)s->len)
		s->width = flag->width - s->len;
	else
		s->width = 0;
}

size_t			get_width(t_info *flag, size_t len, int prefix, uintmax_t nbr)
{
	int		true_len;

	true_len = len + prefix;
	if (!nbr && flag->got_prec && !flag->prec)
		len--;
	if (flag->width > flag->prec)
	{
		if (flag->prec > true_len)
			return (flag->width - flag->prec - prefix);
		else if (flag->width > true_len)
			return (flag->width - true_len);
		else
			return (0);
	}
	else if (flag->got_prec && !flag->prec)
		return (flag->width);
	else
		return (0);
}

size_t			get_prec(t_info *flag, size_t len, uintmax_t nbr)
{
	if (!nbr && flag->got_prec && !flag->prec)
		len--;
	if (flag->prec > (int)len)
		return (flag->prec - len);
	else
		return (0);
}
