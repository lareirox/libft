/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:25:18 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/02 16:45:21 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char )c;

	while (*s && *s != c)
		s++;
	if (c == *s)
		return ((char *)s);
	return (NULL);
}




/* LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
** DESCRIPTION: The strchr() function locates the first occurrence of c (converted to a char) 
in the string pointed to by s.
** The terminating null character is considered to be part of the string;
** therefore if c is `\0', the functions locate the terminating `\0'. 
a string para no nulo e devolve o nulo '\0'.
a propria strchr nao trata s == NULL por isso tb nao temos de verficar esse caso.
*/
