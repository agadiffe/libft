/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:36:43 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:25:12 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne une chaine de caractere terminee
**	par un ’\0’. Chaque caractere de la chaine est initialise a ’\0’.
**	Si l’allocation echoue, la fonction renvoie NULL.
*/

char	*ft_strnew(size_t size)
{
	char	*s;

	if (!(s = (char*)malloc(size + 1)))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
