/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <nugoncal@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:36:27 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/08 12:45:48 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= ' ' && c <= '~'))
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
	int	s = ft_isprint(c);

	printf("print 1\noutros 0\n: %i\n", s);
	return (0);
}*/
