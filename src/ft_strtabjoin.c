/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 17:38:04 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/27 17:52:33 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne un tableau de chaine de caracteres
**	(toutes terminees par un '\0', le tableau egalement) resultant de la
**	concatenation des tableaux tab1 et tab2.
**	Si l’allocation echoue, la fonction renvoie NULL.
*/

char		**ft_strtabjoin(char **tab1, char **tab2)
{
	char	**tab;
	char	**tmp;

	if (!(tab = (char **)malloc(sizeof(char *)
							* (ft_strtablen(tab1) + ft_strtablen(tab2) + 1))))
		return (NULL);
	tmp = tab;
	while (*tab1)
		*tab++ = ft_strdup(*tab1++);
	while (*tab2)
		*tab++ = ft_strdup(*tab2++);
	*tab = NULL;
	return (tmp);
}
