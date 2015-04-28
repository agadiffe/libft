/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 15:38:25 by agadiffe          #+#    #+#             */
/*   Updated: 2015/03/19 17:54:27 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Affiche le double n (suivant une precision) sur la sortie standard.
*/

static void		handle_precision(double n, int prec)
{
	if (prec < 10)
	{
		n = n * ft_pow(10, prec);
		ft_putnchar('0', prec - ft_longlen(n));
		if ((long)((n - (long)n) * 10) > 4)
			n += 1;
		ft_putlnbr(n);
	}
	else
	{
		while (prec--)
		{
			n *= 10;
			if (!prec && (long)((n - (long)n) * 10) > 4
						&& (long)((n - (long)n) * 10) != 9)
				n += 1;
			ft_putnbr(n);
			n -= (long)n;
		}
	}
}

void			ft_putdouble(double n, int prec)
{
	int			neg;

	if (prec < 0)
		prec = 0;
	if ((neg = n < 0 ? 1 : 0))
	{
		n = -n;
		ft_putchar('-');
	}
	ft_putlnbr(n);
	ft_putchar('.');
	if ((n = n - (long)n))
		handle_precision(n, prec);
	else
		ft_putnchar('0', prec);
}
