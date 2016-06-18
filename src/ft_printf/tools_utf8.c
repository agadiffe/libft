/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_utf8.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 17:26:54 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/14 17:30:01 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <wchar.h>

void			count_utf8(unsigned warg, size_t *ret)
{
	if (warg < 0x80)
		(*ret)++;
	else if (warg <= 0x7FF)
		*ret += 2;
	else if (warg <= 0xFFFF)
		*ret += 3;
	else if (warg <= 0x10FFFF)
		*ret += 4;
}

void			handle_utf8(unsigned warg)
{
	if (warg < 0x80)
		ft_putchar(warg);
	else if (warg <= 0x7FF)
	{
		ft_putchar((warg >> 6) + 0xC0);
		ft_putchar((warg & 0x3F) + 0x80);
	}
	else if (warg <= 0xFFFF)
	{
		ft_putchar((warg >> 12) + 0xE0);
		ft_putchar(((warg >> 6) & 0x3F) + 0x80);
		ft_putchar((warg & 0x3F) + 0x80);
	}
	else if (warg <= 0x10FFFF)
	{
		ft_putchar((warg >> 18) + 0xF0);
		ft_putchar(((warg >> 12) & 0x3F) + 0x80);
		ft_putchar(((warg >> 6) & 0x3F) + 0x80);
		ft_putchar((warg & 0x3F) + 0x80);
	}
}
