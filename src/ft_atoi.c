/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:35:53 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/30 21:38:04 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The atoi() function converts the initial portion of the string
**	pointed to by str to int representation.
**	-------------------------------------------------------------------------
**	It is equivalent to:
**	(int)strtol(str, (char **)NULL, 10);
**	-------------------------------------------------------------------------
**	While the atoi() function uses the current locale, the atoi_l() function
**	may be passed a locale directly. See xlocale(3) for more information.
**	-------------------------------------------------------------------------
**	IMPLEMENTATION NOTES
**	The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.
**	-------------------------------------------------------------------------
**	The atoi() and atoi_l() functions have been deprecated by strtol()
**	and strtol_l() and should not be used in new code.
*/

int	ft_atoi(const char *s)
{
	int		is_neg;
	int		n;

	is_neg = 0;
	n = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		is_neg = 1;
		s++;
	}
	while (*s && ft_isdigit(*s))
		n = n * 10 + (*s++ - '0');
	return (is_neg ? -n : n);
}
