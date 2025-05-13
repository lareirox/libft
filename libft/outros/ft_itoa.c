/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:38:41 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/07 12:09:51 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nlen(long int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	// if (n < 0)
	// 	len++;//acrescenta espa;o para o sinal -
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
char	*ft_char(char *str, unsigned int nb, int len, int sign)
{
	str[len] = '\0';
	while (len > sign)// loop tem de acabar quando len == 0
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
char	*ft_itoa(int n)
{
	long int	nb;
	int		len;
	char		*str;
	int		sign;

	nb = n;
	sign = 0;
	if (n < 0)
		sign = 1;
	if (nb == 0)//caso para o = directamente
		return ("0");
	if (nb == -2147483648)
		return ("-2147483648");
	len = ft_nlen(nb);
	str = malloc(sizeof(char) * (len + sign + 1));
	if (nb < 0) {
		nb = -nb;
		str[0] = '-';
	}
	str = ft_char(str, nb, len + sign, sign);
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

char    *ft_itoa(int n);

int main(void)
{
        char    *result;

        result = ft_itoa(0);
        printf("ft_itoa(0) = %s\n", result);

        result = ft_itoa(123);
         printf("ft_itoa(123) = %s\n", result);
         free(result);
        
        result = ft_itoa(-123);
        printf("ft_itoa(-123) = %s\n", result);
        free(result);

         result = ft_itoa(2147483647);
         printf("ft_itoa(2147483647) = %s\n", result);
         free(result);

        result = ft_itoa(-2147483648);
         printf("ft_itoa(-2147483648) = %s\n", result);
        return (0);
}


/*
int main(int argc, char *argv[])
{
	int		n;
	char	*str;

	if (argc != 2)
	{
		printf("Erro\n");
		return (0);
	}
	n = ft_atoi(argv[1]);
	str = ft_itoa(n);
	// Test
	printf("%s\n", str);
	free(str);
	return (0);

}
*/
