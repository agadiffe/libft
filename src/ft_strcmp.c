/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:33:46 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 02:24:13 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The strcmp() functions lexicographically compare the null-terminated
**	strings s1 and s2.
**		RETURN VALUES
**	The strncmp() functions return an integer greater than, equal to, or less
**	than 0, according as the string s1 is greater than, equal to, or less than
**	the string s2.  The comparison is done using unsigned characters,
**	so that `\200' is greater than `\0'.
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	if (!s1 && !s2)
		return (0);
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
