/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitwith.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/12 00:17:16 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 03:59:21 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne un tableau de chaines de caracteres
**	(toutes terminees par un ’\0’, le tableau egalement) resultant de la
**	decoupe de s selon les caracteres de la chaine c.
**	Si l’allocation echoue, la fonction retourne NULL.
**	Exemple :
**	ft_strsplit("*&&&salut*&&&*les**&&&*etudiants&*", "&*")
**	renvoie le tableau ["salut", "les", "etudiants"].
*/

char	**ft_strsplitwith(char const *s, char *c)
{
	char	**tab;
	size_t	len;
	size_t	i;

	len = ft_wordcountwith(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	tab[len] = NULL;
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && ft_strchr(c, *s))
			s++;
		while (*s && !ft_strchr(c, *s))
		{
			s++;
			len++;
		}
		tab[i++] = ft_strndup(s - len, len);
	}
	return (tab);
}
