/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 16:39:27 by agadiffe          #+#    #+#             */
/*   Updated: 2015/04/07 19:12:32 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**		DESCRIPTION
**	Alloue (avec malloc(3)) et retourne une chaine de caracteres terminee
**	par un ’\0’ representant le double n (suivant une precision).
**	Si l'allocation echoue, la fonction renvoie NULL.
*/

static int		handle_no_number_after_decimal(int prec, char **s)
{
	char		*s_tmp;
	int			i;

	i = 0;
	if (!(s_tmp = (char *)malloc(sizeof(char) * (prec + 1))))
		return (1);
	while (prec--)
		s_tmp[i++] = '0';
	s_tmp[i] = '\0';
	ft_strcat(*s, s_tmp);
	ft_strdel(&s_tmp);
	return (0);
}

static int		precision_smaller_than_10(double n, int prec, char **s)
{
	char		*s_tmp;
	int			prec_tmp;
	int			i;

	i = 0;
	n = n * ft_pow(10, prec);
	prec_tmp = prec - ft_longlen(n);
	if (!(s_tmp = (char *)malloc(sizeof(char) * (prec_tmp + 1))))
		return (1);
	while (prec_tmp--)
		s_tmp[i++] = '0';
	s_tmp[i] = '\0';
	if ((long)((n - (long)n) * 10) > 4)
		n += 1;
	ft_strcat(*s, s_tmp);
	ft_strdel(&s_tmp);
	ft_strcat(*s, s_tmp = ft_ltoa(n));
	ft_strdel(&s_tmp);
	return (0);
}

static int		handle_precision(double n, int prec, char **s)
{
	char		*s_tmp;

	if ((n = n - (long)n))
	{
		if (prec < 10)
			precision_smaller_than_10(n, prec, s);
		else
		{
			while (prec--)
			{
				n *= 10;
				if (!prec && (long)((n - (long)n) * 10) > 4
							&& (long)((n - (long)n) * 10) != 9)
					n += 1;
				ft_strcat(*s, s_tmp = ft_ltoa(n));
				ft_strdel(&s_tmp);
				n -= (long)n;
			}
		}
	}
	else
		handle_no_number_after_decimal(prec, s);
	return (0);
}

char			*ft_dtoa(double n, int prec)
{
	char		*s;
	char		*s_tmp;
	size_t		len;

	if (prec < 0)
		prec = 0;
	len = ft_longlen(n) + prec + 1;
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[0] = '\0';
	if (n < 0 ? 1 : 0)
	{
		n = -n;
		s[0] = '-';
		s[1] = '\0';
	}
	ft_strcat(s, s_tmp = ft_ltoa(n));
	ft_strdel(&s_tmp);
	if (prec)
	{
		ft_strcat(s, ".");
		if (handle_precision(n, prec, &s))
			return (NULL);
	}
	return (s);
}
