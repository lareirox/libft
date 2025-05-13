/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:23:01 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/09 18:27:20 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content),
	free(lst);
}
/*
* param: 
lst: The node to free.
del: The address of the function used to delete
the content.

descrição: 
Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node.
*/
