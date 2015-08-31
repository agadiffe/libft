/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 23:45:26 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 00:01:31 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

/*
**		DESCRIPTION
**	Calcule le nombre de caractere d'un nombre unsigned en fonction d'une base.
*/

int		ft_nlen(uintmax_t n, int base)
{
	int		len;

	if (!n)
		return (1);
	len = 0;
	if (base > 1)
	{
		while (n)
		{
			n /= base;
			len++;
		}
	}
	return (len);
}
