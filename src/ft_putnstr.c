/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 00:33:53 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/02 13:48:32 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
**		DESCRIPTION
**	Affiche n charactere de la chaine s sur la sortie standard.
*/

void	ft_putnstr(char const *s, size_t n)
{
	(void)write(1, s, ft_strnlen(s, n));
}
