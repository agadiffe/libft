/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 18:07:51 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:19:35 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Prend en parametre l’adresse d’un pointeur sur un maillon et libere la
**	memoire de ce maillon et celle de tous ses successeurs l’un apres l’autre
**	avec del et free(3).
**	Pour terminer, le pointeur sur le premier maillon maintenant libere doit
**	etre mis a NULL (de maniere similaire a la fonction ft_memdel).
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while (*alst)
	{
		tmp = (*alst)->next;
		ft_lstdelone(&(*alst), del);
		*alst = tmp;
	}
	ft_memdel((void **)alst);
}
