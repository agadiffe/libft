/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 15:23:27 by agadiffe          #+#    #+#             */
/*   Updated: 2015/03/17 15:48:43 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The ft_pow() functions compute x raised to the power y.
*/

double	ft_pow(double x, double y)
{
	double	ret;
	int		neg;

	neg = y > 0 ? 0 : 1;
	ret = 1;
	if (x == 1 || y == 0)
		return (1);
	else if (x == 0)
		return (0);
	y = neg ? -y : y;
	while (y--)
		ret *= x;
	if (neg)
		ret = 1 / ret;
	return (ret);
}
