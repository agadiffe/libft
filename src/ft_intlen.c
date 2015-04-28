/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 22:11:33 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 20:27:41 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>

/*
**		DESCRIPTION
**	Calcule le nombre de caractere d'un int, incluant le '-' si present.
*/

int		ft_intlen(int n)
{
	size_t	len;

	if (n == INT_MIN)
		return (11);
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
