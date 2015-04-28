/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:49:21 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/02 13:28:46 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**		DESCRIPTION
**	Ecrit le caractere c sur le descripteur de fichier fd.
*/

void	ft_putchar_fd(char c, int fd)
{
	(void)write(fd, &c, 1);
}
