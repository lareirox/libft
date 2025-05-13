/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:37:16 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/08 17:35:15 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*dest_cast;
	unsigned char	*src_cast;

	if (dest == src)
		return (dest);
	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_cast[i] = src_cast[i];
		i++;
	}
	return (dest);
}
/*
a função memcpy:
- copia n bytes da área de memória src (source = origem) para a 
área de memória dest (destination = destino).
- não para no '\0' (não se importa se os dados são texto ou não). 
- copia exatamente o número de bytes que tu disseres.

**  LIBRARY: "string.h"
**  DESCRIPTION: The memcpy() function copies n bytes from memory area src 
**  to memory area dest.  The memory areas must
**  not overlap.  Use memmove(3) if the memory areas do overlap.

*/
