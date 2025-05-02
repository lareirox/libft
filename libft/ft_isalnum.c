/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <nugoncal@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:39:28 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/08 12:48:31 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z')
		&& !(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = '4';
	int	s = ft_isalnum(c);

	printf("alfabeto  e numeros 1\noutros 0\n: %i\n", s);
	return (0);
}*/
