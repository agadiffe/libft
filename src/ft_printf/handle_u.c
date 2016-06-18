/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 17:05:43 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/21 19:22:53 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			handle_uint_u(va_list *ap, t_info *flag)
{
	flag_handle(flag, handle_unsigned_va_arg(flag, ap), BASE_10, NULL);
}

void			handle_ulong_bigu(va_list *ap, t_info *flag)
{
	flag->mod = l;
	handle_uint_u(ap, flag);
}
