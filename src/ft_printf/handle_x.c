/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 17:11:33 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 15:37:28 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			handle_hexa_x(va_list *ap, t_info *flag)
{
	char		*prefix;
	uintmax_t	nbr;

	nbr = handle_unsigned_va_arg(flag, ap);
	flag->sep = 0;
	prefix = flag->hash && !(flag->hash && !nbr) ? "0x" : NULL;
	flag_handle(flag, nbr, BASE_16_L, prefix);
}

void			handle_hexa_bigx(va_list *ap, t_info *flag)
{
	char		*prefix;
	uintmax_t	nbr;

	nbr = handle_unsigned_va_arg(flag, ap);
	flag->sep = 0;
	prefix = flag->hash && !(flag->hash && !nbr) ? "0X" : NULL;
	flag_handle(flag, nbr, BASE_16_U, prefix);
}
