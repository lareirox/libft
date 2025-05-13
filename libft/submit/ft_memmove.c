/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:10:29 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/08 16:45:31 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s)
		return (dest);
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
 * LIBRARY: <string.h>
DESCRIPTION: 
The memmove() function copies n bytes from string src to string dest.
The two strings may overlap; the copy is always done in a non-destructive manner.
The difference between memmove and memcpy it's that memmove uses a buffer

--> dest > src (dest começa depois da origem) 
→ risco de sobreposição	Copiar de trás para frente

comeca a alterar a origem e depois quando esta a ler a origem, 
ja foi corrompida pela dest

--> dest < src (dest começa antes da origem) 
→ sem risco	Copiar de frente para trás

*/
/*
#include <stdio.h>
#include <string.h> // para comparar com a versão original

int	main(void)
{
	char src1[] = "abcdef";
	char dest1[10];

	// Caso 1: Copiar sem sobreposição
	printf("Caso 1 - Sem sobreposição\n");
	ft_memmove(dest1, src1, 6);
	printf("src:  %s\n", src1);
	printf("dest: %s\n\n", dest1);

	// Caso 2: Copiar com sobreposição (dest > src)
	char str2[] = "123456789";
	printf("Caso 2 - Com sobreposição (dest > src)\n");
	printf("Antes: %s\n", str2);
	ft_memmove(str2 + 2, str2, 5); // Copiamos "12345" para a posição +2
	printf("Depois: %s\n\n", str2);

	// Caso 3: Copiar com sobreposição (dest < src)
	char str3[] = "123456789";
	printf("Caso 3 - Com sobreposição (dest < src)\n");
	printf("Antes: %s\n", str3);
	ft_memmove(str3, str3 + 2, 5); // Copiamos "34567" para o início
	printf("Depois: %s\n\n", str3);

	return (0);
}
*/
