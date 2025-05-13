/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:04:38 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/10 16:34:20 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	list_size;

	list_size = 0;
	while (lst)
	{
		lst = lst->next;
		list_size++;
	}
	return (list_size);
}
/*
Parameters -- lst: The beginning of the list.
return The length of the list

Counts the number of nodes in the list.
*/
