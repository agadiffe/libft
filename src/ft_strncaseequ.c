/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncaseequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 00:07:14 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:23:26 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Compare lexicographiquement s1 et s2 sans tenir compte de la case
**	jusqu’a n caracteres maximum ou bien qu’un ’\0’ ait ete rencontre.
**	Si les deux chaines sont egales, la fonction retourne 1, ou 0 sinon.
*/

int	ft_strncaseequ(char const *s1, char const *s2, size_t n)
{
	return (ft_strncasecmp(s1, s2, n) == 0);
}
