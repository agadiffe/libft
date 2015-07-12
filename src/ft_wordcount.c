/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 22:41:16 by agadiffe          #+#    #+#             */
/*   Updated: 2015/07/12 00:12:24 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	Compte le nombre de "mot" suivant le delimitateur c.
*/

size_t	ft_wordcount(const char *s, char c)
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
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			check = 1;
		}
		if (check)
			len++;
	}
	return (len);
}
