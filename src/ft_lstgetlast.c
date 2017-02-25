/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 10:56:13 by agadiffe          #+#    #+#             */
/*   Updated: 2017/02/25 10:56:29 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstgetlast(t_list **alst)
{
	t_list		*tmp;

	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
