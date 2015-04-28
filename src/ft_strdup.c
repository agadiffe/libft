/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:44:11 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:14:19 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer
**	may subsequently be used as an argument to the function free(3).
**	-------------------------------------------------------------------------
**	If insufficient memory is available, NULL is returned and errno is
**	set to ENOMEM.
**	-------------------------------------------------------------------------
**	The strndup() function copies at most n characters from the string s1
**	always NUL terminating the copied string.
*/

char	*ft_strdup(const char *s1)
{
	char	*dst;

	if (!(dst = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	ft_strcpy(dst, s1);
	return (dst);
}
