/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <nugoncal@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:54:38 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/08 14:38:39 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		len;

	len = 0;
	while (src[len])
		len++;
	duplicate = (char *) malloc(sizeof(char) * (len + 1));
	if (!duplicate)
		return (NULL);
	len = 0;
	while (src[len])
	{
		duplicate[len] = src[len];
		len++;
	}
	duplicate[len] = '\0';
	return (duplicate);
}

#include <stdio.h>

int     main(void)
{
        char    src[] = "42 is hard!";
	char	*dup = ft_strdup(src);

   	if (dup)
	{
        	printf("original: %s\n", src);
	        printf("dup: %s\n", dup);
        	free(dup); // Correct: free the duplicated string
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
