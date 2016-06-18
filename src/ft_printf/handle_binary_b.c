/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_binary_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 22:43:44 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/21 19:12:16 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			handle_binary_b(va_list *ap, t_info *flag)
{
	flag->hash = 0;
	flag->sep = 0;
	flag_handle(flag, handle_unsigned_va_arg(flag, ap), BASE_2, "0b");
}
