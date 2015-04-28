/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:13:11 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/02 13:34:30 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	The strlen() function computes the length of the string s.
**		RETURN VALUES
**	The strlen() function returns the number of characters that precede
**	the terminating NUL character.
*/

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
