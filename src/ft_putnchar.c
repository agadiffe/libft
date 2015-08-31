/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 00:44:21 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 01:03:18 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

/*
**		DESCRIPTION
**	Affiche n fois le caractere c sur la sortie standard.
*/

void	ft_putnchar(char c, size_t n)
{
	while (n--)
		(void)write(1, &c, 1);
}
