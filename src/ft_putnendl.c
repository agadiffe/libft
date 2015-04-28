/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnendl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:24:39 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:36:10 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Affiche n charactere de la chaine s sur la sortie standard suivie d'un '\n'.
*/

void	ft_putnendl(char const *s, size_t n)
{
	size_t		i;

	i = 0;
	while (s[i] && n-- > 0)
		i++;
	ft_putnstr(s, i);
	ft_putchar('\n');
}
