/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:24:21 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/02 13:28:25 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**		DESCRIPTION
**	Affiche le caractere c sur la sortie standard.
*/

void	ft_putchar(char c)
{
	(void)write(1, &c, 1);
}
