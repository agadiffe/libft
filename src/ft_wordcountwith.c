/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcountwith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 23:23:29 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 03:51:16 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
**		DESCRIPTION
**	Compte le nombre de "mot" suivant les delimitateurs de la chaine c.
*/

size_t	ft_wordcountwith(const char *s, char *c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && ft_strchr(c, *s))
			s++;
		if (*s)
			count++;
		while (*s && !ft_strchr(c, s[i]))
			s++;
	}
	return (count);
}
