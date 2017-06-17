/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:58:52 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:19:59 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCIPTION
**	Prend en parametre l’adresse d’un pointeur sur un maillon et libere la
**	memoire du contenu de ce maillon avec la fonction del passee en parametre
**	puis libere la memoire du maillon en lui meme avec free(3).
**	La memoire du champ next ne doit en aucun cas etre liberee.
**	Pour terminer, le pointeur sur le maillon maintenant libere doit etre
**	mis a NULL (de maniere similaire a la fonction ft_memdel).
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)&(*alst));
	ft_memdel((void **)alst);
}
