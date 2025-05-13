/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:13:54 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/08 16:22:58 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_nlen(int n);
char		*ft_char(char *str, unsigned int nb, long len);

char	*ft_itoa(int n)
{
	unsigned int	nb;
	long		len;
	char		*str;

	len = ft_nlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		nb = -n,
		str[0] = '-';
	}
	else
		nb = n;
	str = ft_char(str, nb, len);
	return (str);
}

char	*ft_char( char *str, unsigned int nb, long len)
{
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

long ft_nlen(int n)
{
	long	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		++len;
	}
	return (len);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		n;
	char	*str;

	if (argc != 2)
	{
		printf("Erro\n");
		return (0);
	}
	n = atoi(argv[1]);
	str = ft_itoa(n);
	//test
	printf("%s\n", str);
	free(str);
	return (0);
}
