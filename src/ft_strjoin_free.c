/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 00:46:16 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:18:46 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne une chaine de caracteres terminee
**	par un ’\0’ resultant de la concatenation de s1 et s2.
**	une fois la concatenation faite, libere s1 et s2 et les mets a NULL.
**	Si l’allocation echoue, la fonction renvoie NULL.
*/

char	*ft_strjoin_free(char *s1, char const *s2)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(char)
					* ((ft_strlen(s1) + ft_strlen(s2) + 1)))))
		return (NULL);
	ft_strcpy(s, s1);
	ft_strcat(s, s2);
	ft_strdel(&s1);
	return (s);
}
