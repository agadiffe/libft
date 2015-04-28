/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:56:43 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:36:48 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

/*
**		DESCRIPTION
**	Ecrit la chaine s sur le descripteur de fichier fd.
*/

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (write(fd, s, i) == -1)
		return ;
}
