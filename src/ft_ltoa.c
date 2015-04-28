/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:39:22 by agadiffe          #+#    #+#             */
/*   Updated: 2015/01/27 22:15:58 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne une chaine de caracteres terminee
**	par un ’\0’ representant l’entier long n.
**	Si l'allocation echoue, la fonction renvoie NULL.
*/

char			*ft_ltoa(long n)
{
	char	*s;
	size_t	len;

	if (n == LONG_MAX)
		return (ft_strdup("9223372036854775807"));
	if (n == LONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	len = ft_intlen(n) + 1;
	if (!(s = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[len - 1] = '\0';
	while (n)
	{
		len--;
		s[len - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
