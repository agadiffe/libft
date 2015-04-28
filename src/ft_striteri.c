/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 20:24:38 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:34:36 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	Applique la fonction f a chaque caractere de la chaine de caracteres en
**	precisant son index en premier argument.
**	Chaque caractere est passe par adresse a la fonction f afin de pouvoir
**	etre modifie si necessaire.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (*s)
		f(i++, s++);
}
