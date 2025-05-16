/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:50:24 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/02 17:21:08 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void		*space;
	unsigned int		total_size;
	unsigned int			i;
	unsigned char		*ptr;

	if (count > INT_MAX/size)
		return (0);
	total_size = count * size;
	space = malloc(total_size);
	if (space == NULL)
		return (NULL);
	i = 0;
	ptr = (unsigned char *)space;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (space);
}

/*
** LIBRARY: <stdlib.h>
** DESCRIPTION: calloc() function is used to dynamically allocate
**		multiple blocks of memory. calloc needs two arguments.
**		The number of blocks(size_t numb) and the size of each
**		block(size_t size). Memory allocated by calloc is initialized
**		to zero. calloc return NULL when sufficient memory is not
**		available in the heap.

 * A função calloc serve para:
Alocar memória suficiente para armazenar count elementos, cada um com size bytes.
Inicializar toda essa memória com zeros.
Ou seja, faz duas coisas importantes:
    Calcula quanto de memória precisa (count * size)
    Usa malloc para alocar essa memória
    Usa algo como memset (ou um loop) para preencher a memória com zeros

*/
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	void *ptr = ft_calloc(5, sizeof(int));
	if (ptr)
	{
		for (size_t i = 0; i < 5 * sizeof(int); i++)
		{
			if (((unsigned char *)ptr)[i] != 0)
			{
				printf("FAILED");
				free(ptr);
				return (0);
			}
		}
			printf("SUCCESS");
	}
	else 
		printf("FAILED");
	free(ptr);
}