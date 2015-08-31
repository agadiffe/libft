/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 21:32:19 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 03:25:29 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strrev() function reverses a given string.
*/

char	*ft_strrev(char *str)
{
	char	*str_origin;
	char	*str_end;
	char	tmp;

	str_origin = str;
	str_end = str + ft_strlen(str) - 1;
	while (str < str_end)
	{
		tmp = *str;
		*str++ = *str_end;
		*str_end-- = tmp;
	}
	return (str_origin);
}
