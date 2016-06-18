/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 16:20:25 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 16:27:44 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

static void		reset_flag_info(t_info *flag)
{
	int		tmp;

	tmp = flag->ret_printf;
	ft_bzero(flag, sizeof(t_info));
	flag->ret_printf = tmp;
}

static void		set_list_opt(t_func *type_choice)
{
	type_choice['s'] = &handle_string_s;
	type_choice['S'] = &handle_wstring_bigs;
	type_choice['c'] = &handle_char_c;
	type_choice['C'] = &handle_wchar_bigc;
	type_choice['p'] = &handle_ptr_p;
	type_choice['D'] = &handle_long_bigd;
	type_choice['d'] = &handle_int_di;
	type_choice['i'] = &handle_int_di;
	type_choice['o'] = &handle_octal_o;
	type_choice['O'] = &handle_octal_long_bigo;
	type_choice['u'] = &handle_uint_u;
	type_choice['U'] = &handle_ulong_bigu;
	type_choice['x'] = &handle_hexa_x;
	type_choice['X'] = &handle_hexa_bigx;
	type_choice['b'] = &handle_binary_b;
	type_choice['n'] = &handle_n;
	type_choice['k'] = &handle_date_k;
}

t_func			*get_func_array(void)
{
	static t_func	*type_choice = NULL;

	if (free_ft_printf(0))
	{
		if (type_choice != NULL)
		{
			free(type_choice);
			type_choice = NULL;
		}
		return (NULL);
	}
	if (type_choice == NULL)
	{
		type_choice = ft_memalloc(sizeof(t_func) * 256);
		if (type_choice)
			set_list_opt(type_choice);
	}
	return (type_choice);
}

void			handle_percent_and_invalid(char charactere, t_info *flag)
{
	if (flag->width > 1 && !flag->minus)
	{
		if (flag->zero)
			ft_putnchar('0', flag->width - 1);
		else
			ft_putnchar(' ', flag->width - 1);
		flag->ret_printf += flag->width - 1;
	}
	ft_putchar(charactere);
	flag->ret_printf++;
	if (flag->width > 1 && flag->minus)
	{
		ft_putnchar(' ', flag->width - 1);
		flag->ret_printf += flag->width - 1;
	}
}

void			handle_arg(va_list *ap, const char **format, t_info *flag)
{
	int		flag_len;

	flag_len = flag_opt(*format, flag, ap);
	*format += flag_len;
	if (get_func_array()[(int)**format] == NULL)
	{
		if (**format != '\0')
			handle_percent_and_invalid(**format, flag);
	}
	else
		get_func_array()[(int)**format](ap, flag);
	reset_flag_info(flag);
}
