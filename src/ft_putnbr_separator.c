/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_separator.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 23:43:29 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/15 22:34:09 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Affiche le nombre unsigned n sur la sortie standard, en separant
**	les centaines par le charactere sep.
*/

static void		ft_putnbr_sep_iner(uintmax_t n, char *sep, size_t i, size_t len)
{
	i++;
	if (n > 9)
		ft_putnbr_sep_iner(n / 10, sep, i, len);
	if (!(i % 3) && i != len)
		ft_putstr(sep);
	ft_putchar('0' + (n % 10));
}

void			ft_putnbr_separator(uintmax_t n, char *sep)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_nlen(n, 10);
	ft_putnbr_sep_iner(n, sep, i, len);
}
