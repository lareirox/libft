/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:46:35 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/02 12:38:22 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount(char *s, char c)
{
	int	wcount;
	int	i;// inicio da palavra

	wcount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wcount++;
		i++;
	}
	return (wcount);// contador de palavras ou elementos
}
char	*word(char *s1, char c)// copia palavra ou elemento
{
		char	*copy;
		int	len;

		len = 0;
		while (s1[len] != c && s1[len] != '\0')
			len++;
		copy = (char *) malloc ((len + 1) * sizeof(char));
		if (!copy)
			return (NULL);
		ft_memcpy(copy, s1, len);
		copy[len] = '\0';
		return (copy);
}

void	free_all(char **word_array, int w)
{
	int	i;

	i = 0;
	while (i < w)
	{
		free(word_array[i]);
		i++;
	}
	free(word_array);
}


char	**array(char **word_array, char *s1, char c, int word_count)
{
	int	w;

	w = 0;
	while (w < word_count)
	{
		while (*s1 == c)
			s1++;
		word_array[w] = word(s1, c);
		if (!word_array[w])
		{
			free_all(word_array, w);// para evitar mem leaks, se por exemplo falhar em s2 nao perder s1
			return (NULL);
		}
		while (*s1 != c && *s1 != '\0')
			s1++;
		w++;
	}
	word_array[w] = NULL;
	return (word_array);
}

char	**ft_split(char const *s, char c)
{
	char	**word_array;
	char	*s1;
	int	word_count;

	s1 = ft_strdup(s);
	if (!s1)
		return (NULL);
	word_count = wordcount(s1, c);
	word_array = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (!word_array)
		return (NULL);
	word_array = (array(word_array, s1, c, word_count));
	free(s1);
	if (!word_array)
		return (NULL);
	return (word_array);
}

corrigir este split, tem memory leaks!!!! ver testes paco -s

/*
#include <stdio.h>
int	main()
{
	char string[] = "hello!";
	char **ret = ft_split(string, ' ');
	for (size_t i = 0; i < 2; i++)
	{
		printf("%s\n", ret[i]);
		free(ret[i]);
	}
	free(ret);
}
ft_split("", ' ')

ft_split(" ", ' ')

ft_split("ola", ' ')

ft_split(" ola mundo 42 ", ' ')

ft_split(NULL, ' ')

*/

/* notas
 * Exemplo:
 * ft_split("hello world test", ' ') //  Deve retornar -> ["hello", "world", "test", NULL]

Temos:
    Uma string s
    Um carácter c que é o separador (o delimiter)
O objetivo é:
    Dividir a string sempre que encontramos c
    Guardar cada parte (palavra) num array de strings
    O array de strings termina com um ponteiro NULL

** DESCRIPTION: Allocates (with malloc(3)) and returns an array of strings 
** 		obtained by splitting ’s’ using the character ’c’ as a 
**		delimiter. The array must end with a NULL pointer.

*/
