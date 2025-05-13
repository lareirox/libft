/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:48:31 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/08 18:53:29 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
t_list **lst: Um ponteiro para o ponteiro da lista, ou seja, um ponteiro para
o primeiro nó da lista. A função precisa de um ponteiro duplo para poder 
alterar o primeiro nó da lista original.

t_list *new: Um ponteiro para o novo nó que será adicionado à lista.

lst: The address of a pointer to the first node of a list.
new: The address of a pointer to the node to be added.

Resumo:

Essa função adiciona o nó new no início de uma lista ligada. O campo next
do novo nó passa a apontar para o antigo primeiro nó, e o ponteiro lst é 
atualizado para apontar para o novo nó.

Exemplo de como a função pode ser usada:

Imagine uma lista ligada com dois nós:

    head -> A -> B -> NULL

Se chamarmos ft_lstadd_front(&head, C), a lista se tornará:

    head -> C -> A -> B -> NULL

Ou seja, C foi inserido no início da lista.
*/
