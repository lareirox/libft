/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <nugoncal@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:15:24 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/07 17:27:16 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	buffer[10];
	ft_memset(buffer, 'X', 5);
	buffer[5] = '\0';
	printf("ft_memset result: %s\n", buffer);

	char buffer2[10];
	memset(buffer2, 'x', 5);
	buffer2[5] = '\0';
	printf("memset result:	%s\n", buffer2);

	return 0;
}


void test_ft_memset(void)
{
    // 1. Zero Bytes (n = 0)
    {
        char buffer[10] = "Hello";
        ft_memset(buffer, 'A', 0);
        printf("Zero Bytes: %s\n", buffer); // Should still print "Hello"
    }

    // 2. Full Memory Fill (n = sizeof(buffer))
    {
        char buffer[10];
        ft_memset(buffer, 'B', 10);
        buffer[10] = '\0';  // Null terminate for printing
        printf("Full Memory Fill: %s\n", buffer); // Should print "BBBBBBBBBB"
    }

  {
        char buffer[10];
        ft_memset(buffer, 0, 5);  // Should set the first 5 bytes to '\0'
        buffer[5] = '\0';  // Null terminate for printing
        printf("Filling with Zero: ");
        for (int i = 0; i < 5; i++) {
            printf("%c", buffer[i]);  // Should print "     " (empty spaces)
        }
        printf("\n");
    }
}

*/
