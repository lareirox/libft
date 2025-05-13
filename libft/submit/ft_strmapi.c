/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:51:34 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/07 18:47:10 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*strmapi;

	if (s == NULL || f == NULL)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	strmapi = malloc((len + 1) * sizeof(char));
	if (!strmapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		strmapi[i] = f(i, s[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}

// "Copiar e transformar com malloc → conta, aloca, percorre, termina, retorna"
// Isto aplica-se a quase todas as funções tipo map, substr, strdup, etc.
// "Se eu fiz malloc, sou eu que faço free. 
// Se eu não fiz malloc, não toco no free."
/*
#include <stdio.h>

	unsigned int	 g_n;// variavel global, fora da main

char	addn(unsigned int i, char c)
{
	(void)i;// não vamos usar este parametro, void para avisar o compilador
77para não dar warning ou erro
	return (c + g_n);
}

int main(int argc, char *argv[])
{
	char *str;
	char	*result;

	if (argc != 3)
	{
		printf("Usage: %s <string>", argv[0]);
		return (1);
	}
	str = argv[1];
	g_n = atoi(argv[2]);
	
	result = ft_strmapi(str, addn);
	if (!result)
	{
		printf("Erro ao alocar memória.\n");
		return (1);
	}

	printf("Original   : %s\n", str);
	printf("Transformado: %s\n", result);

	free(result);
	return (0);

	// Tests
	//printf("strmapi(%s, rot%d) = ", str, n);
	//printf("%s\n", ft_strmapi(str, addn));

	//return (0);
}

char example_function(unsigned int i, char c)
{
	(void)i;
    return (c + 1);
}

int main()
{
    char *result;

    result = ft_strmapi("hello", example_function);
    printf("%s\n", result); // Expected: "hfnos"
    free(result);

    result = ft_strmapi("", example_function);
    printf("%s\n", result);
	free(result);

    result = ft_strmapi("a", example_function);
    printf("%s\n", result);
	free(result);

    result = ft_strmapi("!@#", example_function);
    printf("%s\n", result);
    free(result);
}
*/
