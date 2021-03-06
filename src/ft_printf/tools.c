/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 21:57:02 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 16:28:27 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <locale.h>

int				free_ft_printf(int set)
{
	static int	cleanup = 0;

	if (set && cleanup == 0)
	{
		cleanup = 1;
		get_func_array();
		cleanup = 0;
	}
	return (cleanup);
}

void			do_putnbr_separator(uintmax_t nbr)
{
	struct lconv	*locale_conv;

	locale_conv = localeconv();
	ft_putnbr_separator(nbr, locale_conv->thousands_sep);
}

static void		count_sep_inner(uintmax_t n, size_t i, size_t len, size_t *nbr)
{
	i++;
	if (n > 9)
		count_sep_inner(n / 10, i, len, nbr);
	if (!(i % 3) && i != len)
		(*nbr)++;
}

int				count_sep(uintmax_t n)
{
	size_t		i;
	size_t		len;
	size_t		count;

	i = 0;
	count = 0;
	len = ft_nlen(n, 10);
	count_sep_inner(n, i, len, &count);
	return (count);
}
