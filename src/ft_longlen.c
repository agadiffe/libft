/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 22:11:33 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 20:34:29 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>

/*
**		DESCRIPTION
**	Calcule le nombre de caractere d'un long, incluant le '-' si present.
*/

int		ft_longlen(long n)
{
	size_t	len;

	if (n == LONG_MIN)
		return (20);
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
