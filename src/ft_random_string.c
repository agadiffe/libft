/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 19:34:47 by agadiffe          #+#    #+#             */
/*   Updated: 2015/09/07 19:37:49 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char		*ft_random_string(int n)
{
	char	*str;
	int		fd;
	int		ret;

	if (!(str = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	fd = open("/dev/urandom", O_RDONLY);
	ret = read(fd, str, n);
	close(fd);
	if (ret == -1)
	{
		ft_strdel(&str);
		return (NULL);
	}
	str[ret] = '\0';
	while (--ret >= 0)
	{
		if (str[ret] < 0)
			str[ret] = -str[ret];
		str[ret] = str[ret] % (126 - 33 + 1) + 33;
	}
	return (str);
}
