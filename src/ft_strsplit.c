/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:17:18 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 03:59:28 by agadiffe         ###   ########.fr       */
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
	size_t	len;
	size_t	i;

	len = ft_wordcount(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	tab[len] = NULL;
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		tab[i++] = ft_strndup(s - len, len);
	}
	return (tab);
}
