/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:53:26 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 20:38:06 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne une zone de memoire initialisee a 0.
**	Si l’allocation echoue, la fonction renvoie NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*s;

	if (!size || !(s = malloc(size)))
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
