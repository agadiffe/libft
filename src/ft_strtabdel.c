/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 20:30:37 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/11 20:53:36 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
**		DESCRIPTION
**	Libere un tableau de chaine de charactere en mettant leur pointeur a NULL,
**	puis met son pointeur a NULL.
*/

void	ft_strtabdel(char ***astrtab)
{
	size_t	i;

	i = 0;
	if (astrtab && *astrtab)
	{
		while ((*astrtab)[i])
		{
			ft_strdel(&(*astrtab)[i]);
			i++;
		}
		ft_memdel((void **)astrtab);
	}
}
