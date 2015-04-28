/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 00:18:57 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:28:10 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne la copie d’un troncon de la chaine
**	de caracteres. Le troncon commence a l’index start et a pour longueur len.
**	Si start et len ne designent pas un troncon de chaine valide,
**	le comportement est indetermine.
**	Si l’allocation echoue, la fonction renvoie NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strncpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
