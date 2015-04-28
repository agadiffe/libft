/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 23:43:29 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/15 19:41:12 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Affiche le nombre unsigned n sur la sortie standard, en fonction d'une base.
*/

static void		ft_putnbr_base_inner(uintmax_t n, size_t len_base, char *base)
{
	if (n >= len_base)
		ft_putnbr_base_inner(n / len_base, len_base, base);
	ft_putchar(base[n % len_base]);
}

void			ft_putnbr_base(uintmax_t n, char *base)
{
	size_t		len_base;

	len_base = ft_strlen(base);
	if (len_base > 1)
		ft_putnbr_base_inner(n, len_base, base);
}
