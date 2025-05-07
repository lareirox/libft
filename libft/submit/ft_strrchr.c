/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:56:38 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/02 16:57:07 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    const char *s = "42 Lisboa";

    printf("Test 1: %s\n", ft_strrchr(s, 's')); // Deve imprimir "sboa"
    printf("Test 2: %s\n", ft_strrchr(s, '4')); // Deve imprimir "42 Lisboa"
    printf("Test 3: %s\n", ft_strrchr(s, 'x')); // Deve imprimir (null)
    printf("Test 4: %s\n", ft_strrchr(s, '\0')); // Deve imprimir string vazia ("")

    return (0);
}

strrchr procura a última ocorrência de um caractere numa string — e não a primeira como strchr.
Faz-se (char *) para "transformar" o tipo const char * em char *.
O cast é necessário para não dar warning de conversão de tipo.
Só se faz se tiver a certeza que a string original não será modificada.
*/
