/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:29:01 by agadiffe          #+#    #+#             */
/*   Updated: 2014/11/21 20:50:06 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Assigne la valeur ’\0’ a tous les caracteres de la chaine.
*/

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
			*s++ = '\0';
}
