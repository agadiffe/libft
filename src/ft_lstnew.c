/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:09:48 by agadiffe          #+#    #+#             */
/*   Updated: 2017/02/24 18:51:09 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne un maillon. Les champs content et
**	content_size du nouveau maillon sont initialises par copie des parametres
**	de la fonction.
**	Si le parametre content est nul, le champs content est initialise à NULL
**	et le champs content_size est initialise a 0 quelque soit la valeur du
**	parametre content_size.
**	Le champ next est initialise à NULL.
**	Si l’allocation echoue, la fonction renvoie NULL.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (lst)
	{
		if (content)
		{
			lst->content = (void *)malloc(content_size);
			if (!lst->content)
			{
				free(lst);
				return (NULL);
			}
			lst->content = ft_memcpy(lst->content, content, content_size);
			lst->content_size = content_size;
		}
		else
		{
			lst->content = NULL;
			lst->content_size = 0;
		}
		lst->next = NULL;
	}
	return (lst);
}
