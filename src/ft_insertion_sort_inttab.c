/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort_inttab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 14:14:32 by agadiffe          #+#    #+#             */
/*   Updated: 2016/10/27 14:16:38 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_insertion_sort_inttab(int *tab, int length)
{
	int		tmp;
	int		tmp2;
	int		i;

	i = 1;
	while (i <= length - 1)
	{
		tmp = i;
		while (tmp > 0 && tab[tmp] < tab[tmp - 1])
		{
			tmp2 = tab[tmp];
			tab[tmp] = tab[tmp - 1];
			tab[tmp - 1] = tmp2;
			tmp--;
		}
		i++;
	}
}
