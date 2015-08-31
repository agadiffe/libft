/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:11:24 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/30 22:41:44 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The isspace() function tests for the white-space characters.  For any
**	locale, this includes the following standard characters:
**	-------------------------------------------------------------------------
**	``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''
**	-------------------------------------------------------------------------
**	In the "C" locale, isspace() successful test is limited to these characters
**	only.  The value of the argument must be representable as an unsigned char
**	or the value of EOF.
**		RETURN VALUES
**	The isspace() function returns zero if the character tests false and
**	returns non-zero if the character tests true.
*/

int		ft_isspace(int c)
{
	return ((9 <= c && c <= 13) || (c == ' '));
}
