/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 20:49:50 by agadiffe          #+#    #+#             */
/*   Updated: 2017/02/24 18:08:02 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Ajoute l’element new en tete de la liste.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!*alst)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
