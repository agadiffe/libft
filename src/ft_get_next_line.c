/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 21:08:10 by agadiffe          #+#    #+#             */
/*   Updated: 2015/01/30 14:33:41 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

static void		delete(t_gnl **fd_list, t_gnl *d)
{
	t_gnl	*tmp;

	tmp = *fd_list;
	if (tmp == NULL)
		return ;
	else if (d == tmp)
	{
		*fd_list = d->next;
		ft_strdel(&d->buf);
		ft_memdel((void **)&d);
		return ;
	}
	while (tmp->next != d)
		tmp = tmp->next;
	tmp->next = d->next;
	ft_strdel(&d->buf);
	ft_memdel((void **)&d);
}

static t_gnl	*set_data(int const fd, t_gnl **fd_list)
{
	t_gnl			*d;

	d = *fd_list;
	while (d && d->fd != fd)
		d = d->next;
	if (!d)
	{
		if (!(d = (t_gnl *)malloc(sizeof(t_gnl))))
			return (NULL);
		d->buf = NULL;
		d->fd = fd;
		d->next = *fd_list;
		*fd_list = d;
	}
	return (d);
}

static char		*handle_buf(int const fd, char *buf, int *ret)
{
	char	*tmp;
	char	*tmp2;

	if (!(tmp = (char *)malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (NULL);
	if ((*ret = (int)read(fd, tmp, BUF_SIZE)) == -1)
	{
		ft_strdel(&tmp);
		return (NULL);
	}
	tmp[*ret] = '\0';
	tmp2 = buf;
	if (!(buf = ft_strjoin(buf, tmp)))
		return (NULL);
	ft_strdel(&tmp2);
	ft_strdel(&tmp);
	return (buf);
}

static int		get_line(char **buf, char **line, int ret)
{
	char	*str;

	*line = ft_strnew(0);
	if ((str = ft_strchr(*buf, '\n')) != NULL)
	{
		*str = '\0';
		ft_strdel(line);
		if (!(*line = ft_strdup(*buf)))
			return (-1);
		ft_memmove(*buf, str + 1, ft_strlen(str + 1) + 1);
		return (1);
	}
	if (ret == 0 && (*buf)[0] != '\0')
	{
		ft_strdel(line);
		if (!(*line = ft_strdup(*buf)))
			return (-1);
		ft_strdel(buf);
		return (1);
	}
	if ((*line)[0] == '\0')
		ft_strdel(line);
	return (0);
}

int				ft_get_next_line(int const fd, char **line, int stop)
{
	static t_gnl	*fd_list = NULL;
	t_gnl			*d;
	int				ret_gl;

	if (!line || fd < 0 || !(d = set_data(fd, &fd_list)))
		return (-1);
	if (!d->buf)
		if (!(d->buf = ft_strnew(0)))
			return (-1);
	d->ret = 1;
	while (!stop && d->ret > 0)
	{
		if ((ret_gl = get_line(&d->buf, line, d->ret)) == -1)
			return (-1);
		else if (ret_gl)
			return (1);
		ft_strdel(line);
		if (!(d->buf = handle_buf(fd, d->buf, &d->ret)))
			return (-1);
	}
	if (!stop && get_line(&d->buf, line, d->ret))
		return (2);
	delete(&fd_list, d);
	return (0);
}
