/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 01:29:49 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:28:31 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne une copie de la chaine sans les
**	espaces blancs au debut et a la fin de cette chaine.
**	On considere comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’.
**	Si s ne contient pas d’espaces blancs au debut ou a la fin, la fonction
**	renvoie une copie de s.
**	Si l’allocation echoue, la fonction renvoie NULL.
*/

static int	ft_isblank_nl(int c)
{
	return (ft_isblank(c) || (c == '\n'));
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	char	*temp;
	char	*end;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	if (!(temp = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	end = (char *)s + (len - 1);
	while (ft_isblank_nl(*s))
		s++;
	while (ft_isblank_nl(*end))
		end--;
	while (s <= end)
		temp[i++] = *s++;
	temp[i] = '\0';
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(temp))))
		return (NULL);
	ft_strcpy(str, temp);
	ft_strdel(&temp);
	return (str);
}
