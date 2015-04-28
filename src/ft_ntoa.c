/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 23:43:29 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/15 19:40:37 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne une chaine de caracteres terminee
**	par un ’\0’ representant le nombre unsigned n.
**	Si l'allocation echoue, la fonction renvoie NULL.
*/

char	*ft_ntoa(uintmax_t n, const char *base)
{
	char	*value;
	int		len;
	int		len_base;

	len_base = ft_strlen(base);
	len = ft_nlen(n, len_base);
	if (!(value = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	value[len] = '\0';
	if (len_base > 1)
	{
		if (!n)
			value[0] = '0';
		else
		{
			while (n != 0)
			{
				len--;
				value[len] = base[(n % len_base)];
				n /= len_base;
			}
		}
	}
	return (value);
}
