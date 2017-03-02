/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 17:38:52 by agadiffe          #+#    #+#             */
/*   Updated: 2016/03/02 17:40:59 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCIPTION
**	Prend en parametre l’adresse d'une liste et l'adresse d'un de ses maillon,
**	et libere la memoire du contenu de ce maillon avec la fonction del passee
**	en parametre a l'aide de la fonction ft_lstdelone().
**	La liste est mise a jour en raccordant le maillon precedent et suivant
**	du maillon supprime.
*/

void		ft_lstdelnode(t_list **alst, t_list **node_to_del,
							void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (*alst == *node_to_del)
		*alst = (*alst)->next;
	else
	{
		tmp = *alst;
		while (tmp->next != *node_to_del)
			tmp = tmp->next;
		tmp->next = tmp->next->next;
	}
	ft_lstdelone(node_to_del, del);
}
