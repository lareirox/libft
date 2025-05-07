/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:49:44 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/02 10:49:50 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>

char	*ft_strnstr(const char *str, const char *find, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (find[i] == '\0')
		return ((char *)str);

	while (str[i] && i < len)
	{
		j = 0;
		if(str[i] == find[j])
		{
			while(str[i + j] == find[j] && (i + j) < len && find [j] != '\0')
				j++;
			if (!find[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
A função strnstr(haystack, needle, len) procura a primeira ocorrência da needle (sub-string) dentro dos primeiros len caracteres de haystack.
Se needle estiver vazia, retorna o próprio haystack.
Se não encontrar nada, retorna NULL.
*/


