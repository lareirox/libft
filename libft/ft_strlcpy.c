/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:46:34 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/16 17:54:00 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	unsigned int	n;

	n = 0;
	i = 0;
	while (src[n])
		n++;

	if (size == 0)
		return (n);
	
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (n);
}

#include <stdio.h>

int main(void)
{
    char src[] = "Ola Mundo!";
    char dest[6];
    unsigned int ret;

    ret = ft_strlcpy(dest, src, sizeof(dest));

    printf("dest: %s\n", dest);      // Teste normal
    printf("ret: %u\n", ret);        // Esperado: 11

    return 0;
}

