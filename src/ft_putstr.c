/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:50:53 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/02 13:32:13 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
**		DESCRIPTION
**	Affiche la chaine s sur la sortie standard.
*/

void	ft_putstr(char const *s)
{
	(void)write(1, s, ft_strlen(s));
}
