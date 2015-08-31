/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_endl_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:14:55 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 01:00:36 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	Affiche l'entier n suivie d'un \n sur le descipteur de fichier fd.
*/

void	ft_putnbr_endl_fd(int n, int fd)
{
	ft_putnbr_fd(n, fd);
	ft_putchar_fd('\n', fd);
}
