/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:59:00 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/07 18:45:20 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	dest = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
 * ft_strjoin
char *ft_strjoin(char const *s1, char const *s2);
s1: The prefix string.
s2: The suffix string.
The new string.
NULL if the allocation fails.
malloc
Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating
’s1’ and ’s2’.

Temos de:
Calcular o tamanho total necessário (tamanho de s1 + tamanho de s2 + 1 para o \0)
    Alocar memória com malloc
    Copiar s1 para o espaço novo
    Concatenar s2 logo a seguir
    Terminar com \0
    Retornar o novo ponteiro

#include <stdio.h>

int main(void)
{
    char *res;

    res = ft_strjoin("Hello, ", "world!");
    printf("'%s'\n", res);
    free(res);

    res = ft_strjoin("", "world!");
    printf("'%s'\n", res);
    free(res);

    res = ft_strjoin("Hello, ", "");
    printf("'%s'\n", res);
    free(res);

    res = ft_strjoin("", "");
    printf("'%s'\n", res);
    free(res);

    return (0);
}
*/
