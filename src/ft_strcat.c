/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:03:09 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 02:12:00 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
**		DESCRIPTION
**	The strcat() functions append a copy of the null-terminated string s2
**	to the end of the null-terminated string s1, then add a terminating `\0'.
**	The string s1 must have sufficient space to hold the result.
**	-------------------------------------------------------------------------
**	The source and destination strings should not overlap, as the behavior
**	is undefined.
**	-------------------------------------------------------------------------
**		RETURN VALUES
**	The strcat() functions return the pointer s1.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	char	*str;

	str = s1;
	while (*str)
		str++;
	ft_strcpy(str, s2);
	return (s1);
}
