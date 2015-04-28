/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 23:16:55 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:22:26 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Cree une nouvelle chaine (avec malloc(3)) resultant des applications
**	successives de f sur chaque caractere de la chaine.
*/

char	*ft_strmap(char	const *s, char (*f)(char))
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s)
		*str++ = f(*s++);
	*str = '\0';
	return (str - len);
}
