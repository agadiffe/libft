/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcaseequ.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 23:51:31 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:10:41 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Compare lexicographiquement s1 et s2 sans tenir compte de la case.
**	Si les deux chaines sont egales, la fonction retourne 1, ou 0 sinon.
*/

int	ft_strcaseequ(char const *s1, char const *s2)
{
	return (ft_strcasecmp(s1, s2) == 0);
}
