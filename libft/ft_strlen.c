/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <nugoncal@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:49:42 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/08 12:51:32 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc <=2)
	{
		int	len;
		len = 	ft_strlen(argv[1]);
		printf("nr caracteres = %d\n", len);
	}
	return (0);
}*/
