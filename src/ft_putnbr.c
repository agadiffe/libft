/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:14:55 by agadiffe          #+#    #+#             */
/*   Updated: 2015/12/17 17:57:56 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/*
**		DESCRIPTION
**	Affiche l'entier n sur la sortie standard.
*/

static void		ft_putnbr_inner(int n)
{
	if (n > 9)
		ft_putnbr_inner(n / 10);
	ft_putchar('0' + (n % 10));
}

void			ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	ft_putnbr_inner(n);
}
