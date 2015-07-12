/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcountwith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 23:23:29 by agadiffe          #+#    #+#             */
/*   Updated: 2015/07/12 00:11:35 by agadiffe         ###   ########.fr       */
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
	size_t	len;
	size_t	i;
	int		check;

	len = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		check = 0;
		while (ft_strchr(c, s[i]) && s[i])
			i++;
		while (!ft_strchr(c, s[i]) && s[i])
		{
			i++;
			check = 1;
		}
		if (check)
			len++;
	}
	return (len);
}
