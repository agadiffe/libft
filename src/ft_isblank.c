/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:55:12 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 20:30:24 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The isblank() function tests for a space or tab character.  For any
**	locale, this includes the following standard characters:
**	-------------------------------------------------------------------------
**	``\t''      `` ''
**	-------------------------------------------------------------------------
**	In the "C" locale, a successful isblank() test is limited to these
**	characters only.  The value of the argument must be representable as an
**	unsigned char or the value of EOF.
**		RETURN VALUES
**	The isblank() function returns zero if the character tests false and
**	returns non-zero if the character tests true.
*/

int	ft_isblank(int c)
{
	return (c == '\t' || c == ' ');
}
