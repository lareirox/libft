/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <nugoncal@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:27:32 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/08 12:24:29 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
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
        int     s = ft_isalpha(c);

        printf("alfabeto 1\noutros 0\n: %i\n", s);
        return (0);
}*/
