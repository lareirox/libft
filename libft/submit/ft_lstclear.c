/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:27:37 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/09 18:34:00 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		(del)((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
descrição:
Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.

param:
lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
*/
