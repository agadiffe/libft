/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 20:49:50 by agadiffe          #+#    #+#             */
/*   Updated: 2017/05/31 16:57:00 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 **		DESCRIPTION
 **	Ajoute l’element new en tete de la liste.
 */

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!*alst)
		*alst = new;
	else
	{
		tmp = new;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = *alst;
		*alst = new;
	}
}
