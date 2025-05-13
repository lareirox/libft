/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:23:06 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/08 18:36:07 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int main()
{
    char *str = "ola";
    t_list *node = ft_lstnew(str);

    if (node == NULL)
    {
        printf("Erro na alocação da memória.\n");
        return (1);
    }

    // Verificar o conteúdo do nó
    printf("node content: %s\n", (char *)node->content);

    // Verificar o próximo nó
    if (node->next == NULL)
        printf("node->next é NULL\n");

    // Limpeza da memória (importante, mas opcional neste exercício)
    free(node);

    return (0);
}
*/
