/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:58:02 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/07 19:09:05 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1 [i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h> // Para comparar com o strncmp da libc

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("---- Testes ft_strncmp ----\n");

// Teste 4: string menor
printf("4: %d | %d\n", ft_strncmp("abc", "abcd", 4), strncmp("abc", "abcd", 4));

// Teste 5: n == 0
printf("5: %d | %d\n", ft_strncmp("abc", "xyz", 0), strncmp("abc", "xyz", 0));

// Teste 6: comparar com string vazia
printf("6: %d | %d\n", ft_strncmp("", "abc", 2), strncmp("", "abc", 2));

// Teste 7: strings iguais, n maior que comprimento
printf("7: %d | %d\n", ft_strncmp("abc", "abc", 10), strncmp("abc", "abc", 10));

// Teste 8: diferença por caracter negativo
char s1[] = {65, -10, 0};  // A, -10
char s2[] = {65, 127, 0};  // A, 127
printf("8: %d | %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));

return (0);
}

ver se é necessário o unsigned char
return ((unsigned char)s1[i] - (unsigned char)s2[i]);
*/
