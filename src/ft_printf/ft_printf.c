/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 15:03:18 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 16:27:24 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int				ft_printf(const char *format, ...)
{
	t_info		flag;
	va_list		ap;

	flag.ret_printf = 0;
	ft_bzero(&flag, sizeof(t_info));
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			handle_arg(&ap, &format, &flag);
		else
		{
			ft_putchar(*format);
			flag.ret_printf++;
		}
		if (*format != '\0')
			format++;
	}
	va_end(ap);
	return (flag.ret_printf);
}
