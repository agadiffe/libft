/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 22:41:16 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:29:16 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	Compte le nombre de "mot" suivant le delimitateur c.
**	Peut compter le nombre de mot avec 'isspace' ou autre,
**	ou le nombre de ligne d'un fichier avec '\n'.
**	D'autre utilisation sont possible...
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
		while (s[i] == c)
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
