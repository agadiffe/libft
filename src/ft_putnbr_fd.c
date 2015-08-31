/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:40:34 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 00:54:34 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/*
**		DESCRIPTION
**	Ecrit l'entier n sur le descipteur de fichier fd.
*/

static void		ft_putnbr_fd_inner(int n, int fd)
{
	if (n > 9)
		ft_putnbr_fd_inner(n / 10, fd);
	ft_putchar_fd('0' + (n % 10), fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	ft_putnbr_fd_inner(n, fd);
}
