/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:53:51 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:17:43 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	Applique la fonction f a chaque caractere de la chaine de caracteres.
**	Chaque caractere est passe par adresse a la fonction f afin de pouvoir
**	etre modifie si necessaire.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s && f)
		f(s++);
}
