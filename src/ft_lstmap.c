/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 22:35:33 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:30:48 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Parcourt la liste lst en appliquant la fonction f a chaque maillon et
**	cree une nouvelle liste avec malloc(3) resultant des applications
**	successives.
**	Si une allocation echoue, la fonction renvoie NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*begin;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new = f(lst);
	begin = new;
	while (lst->next)
	{
		if (!(new->next = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		lst = lst->next;
		new->next = f(lst);
		new = new->next;
	}
	return (begin);
}
