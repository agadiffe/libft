/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 15:23:27 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 00:14:12 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The ft_pow() functions compute x raised to the power y.
*/

int		ft_pow(int x, int y)
{
	int		ret;
	int		neg;

	neg = y > 0 ? 0 : 1;
	ret = 1;
	if (x == 1 || y == 0)
		return (1);
	else if (x == 0)
		return (0);
	if (neg)
		y = -y;
	while (y)
	{
		ret = ret * x;
		y--;
	}
	if (neg)
		ret = 1 / ret;
	return (ret);
}
