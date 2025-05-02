/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <nugoncal@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:33:08 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/08 12:26:43 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int     main(void)
{
        char    c;

        c = '4';
        int     s = ft_isdigit(c);

        printf("numeros 1\noutros 0\n: %i\n", s);
        return (0);
}*/
