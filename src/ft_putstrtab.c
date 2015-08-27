/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 17:45:16 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/27 17:56:18 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Affiche le tableau de chaine de caracteres tab sur la sortie standard.
*/

void		ft_putstrtab(char **tab)
{
	while (*tab)
		ft_putendl(*tab++);
}
