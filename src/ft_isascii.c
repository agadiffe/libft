/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:52:34 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 20:30:07 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The isascii() function tests for an ASCII character, which is any
**	character between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	return (0 <= c && c < 128);
}
