/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 23:37:22 by agadiffe          #+#    #+#             */
/*   Updated: 2015/07/12 03:20:29 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
**	-------------------------------------------------------------------------
**	If insufficient memory is available, NULL is returned and errno is set
**	to ENOMEM.
**	-------------------------------------------------------------------------
**	The strndup() function copies at most n characters from the string s1
**	always NUL terminating the copied string.
*/

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*cpy;

	if (!(cpy = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strncpy(cpy, s1, n);
	return (cpy);
}
