/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:17:18 by agadiffe          #+#    #+#             */
/*   Updated: 2015/03/21 17:01:52 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne un tableau de chaines de caracteres
**	(toutes terminees par un ’\0’, le tableau egalement) resultant de la
**	decoupe de s selon le caractere c.
**	Si l’allocation echoue, la fonction retourne NULL.
**	Exemple :
**	ft_strsplit("*salut*les***etudiants*", ’*’)
**	renvoie le tableau ["salut", "les", "etudiants"].
*/

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			k++;
		}
		if (k)
			tab[j++] = ft_strsub(s, i - k, k);
	}
	tab[j] = NULL;
	return (tab);
}
