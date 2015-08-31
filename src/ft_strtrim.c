/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 01:29:49 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 04:30:24 by agadiffe         ###   ########.fr       */
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
	char const		*s_end;

	while (ft_isblank_nl(*s))
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	s_end = s + ft_strlen(s) - 1;
	while (ft_isblank_nl(*s_end))
		s_end--;
	return (ft_strndup(s, s_end - s + 1));
}
