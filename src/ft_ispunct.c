/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 20:14:24 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 20:31:47 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The ispunct() function tests for any printing character, except for
**	space (` ') or a character for which isalnum(3) is true.  The value of
**	the argument must be representable as an unsigned char or the value of EOF.
**	-------------------------------------------------------------------------
**	In the ASCII character set, this includes the following characters
**	(preceded by their numeric values, in octal):
**	-------------------------------------------------------------------------
**	041 ``!''     042 ``"''     043 ``#''     044 ``$''     045 ``%''
**	046 ``&''     047 ``'''     050 ``(''     051 ``)''     052 ``*''
**	053 ``+''     054 ``,''     055 ``-''     056 ``.''     057 ``/''
**	072 ``:''     073 ``;''     074 ``<''     075 ``=''     076 ``>''
**	077 ``?''     100 ``@''     133 ``[''     134 ``\''     135 ``]''
**	136 ``^''     137 ``_''     140 ```''     173 ``{''     174 ``|''
**	175 ``}''     176 ``~''
**		RETURN VALUES
**	The ispunct() function returns zero if the character tests false and
**	returns non-zero if the character tests true.
*/

int		ft_ispunct(int c)
{
	if ((32 < c && c < 48)
		|| (57 < c && c < 65)
			|| (90 < c && c < 97)
				|| (122 < c && c < 127))
		return (1);
	else
		return (0);
}
