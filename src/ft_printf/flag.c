/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 15:35:01 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 15:04:03 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int		mod_opt(const char *format, t_info *flag, int *i)
{
	if (flag->mod == none && ft_strchr(MOD_TYPE, format[*i]))
	{
		if (format[*i] == 'h' && format[*i + 1] == 'h')
		{
			flag->mod = hh;
			(*i)++;
		}
		else if (format[*i] == 'h')
			flag->mod = h;
		else if (format[*i] == 'l' && format[*i + 1] == 'l')
		{
			flag->mod = ll;
			(*i)++;
		}
		else if (format[*i] == 'l')
			flag->mod = l;
		else if (format[*i] == 'j')
			flag->mod = j;
		else
			flag->mod = z;
		return (1);
	}
	return (0);
}

static int		width_opt(const char *form, t_info *flag, int *i, va_list *ap)
{
	if (form[*i] == '*')
	{
		flag->got_width = 1;
		flag->width = va_arg(*ap, int);
		if (flag->width < 0)
		{
			flag->minus = 1;
			flag->zero = 0;
			flag->width = -flag->width;
		}
	}
	else if (ft_isdigit(form[*i]))
	{
		flag->got_width = 1;
		flag->width = ft_atoi(&form[*i]);
		*i += ft_intlen(flag->width) - 1;
	}
	else
		return (0);
	return (1);
}

static int		prec_opt(const char *form, t_info *flag, int *i, va_list *ap)
{
	if (form[*i] == '.' && ft_isdigit(form[*i + 1]))
	{
		flag->got_prec = 1;
		if ((flag->prec = ft_atoi(&form[++*i])) < 0)
			flag->prec = 0;
		*i += ft_intlen(flag->prec) - 1;
	}
	else if (form[*i] == '.' && form[*i + 1] == '*')
	{
		flag->prec = va_arg(*ap, int);
		flag->got_prec = flag->prec < 0 ? 0 : 1;
		(*i)++;
	}
	else if (form[*i] == '.')
	{
		flag->got_prec = 1;
		flag->prec = 0;
	}
	else
		return (0);
	return (1);
}

static int		handle_flag(const char *format, t_info *flag, int i)
{
	if (format[i] == '#')
		flag->hash = 1;
	else if (format[i] == ' ')
		flag->space = flag->plus ? 0 : 1;
	else if (format[i] == '-')
	{
		flag->minus = 1;
		flag->zero = 0;
	}
	else if (format[i] == '+')
	{
		flag->plus = 1;
		flag->space = 0;
	}
	else if (format[i] == '0')
		flag->zero = flag->minus ? 0 : 1;
	else if (format[i] == '\'')
		flag->sep = 1;
	else
		return (0);
	return (1);
}

int				flag_opt(const char *format, t_info *flag, va_list *ap)
{
	int		i;

	i = 1;
	while (!ft_strchr(CONV_TYPE, format[i]))
	{
		if (handle_flag(format, flag, i))
			;
		else if (width_opt(format, flag, &i, ap)
				|| prec_opt(format, flag, &i, ap)
				|| mod_opt(format, flag, &i))
			;
		else
			break ;
		i++;
	}
	return (i);
}
