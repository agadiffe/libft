/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:55:31 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/30 22:17:18 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The isdigit() function tests for a decimal digit character.  Regard-
**	less of locale, this includes the following characters only:
**	-------------------------------------------------------------------------
**	``0''         ``1''         ``2''         ``3''         ``4''
**	``5''         ``6''         ``7''         ``8''         ``9''
**	-------------------------------------------------------------------------
**	The isnumber() function behaves similarly to isdigit(), but may rec-
**	ognize additional characters, depending on the current locale setting.
**	-------------------------------------------------------------------------
**	The value of the argument must be representable as an unsigned char
**	or the value of EOF.
**		RETURN VALUES
**	The isdigit() and isnumber() functions return zero if the character
**	tests false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
