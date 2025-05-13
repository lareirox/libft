/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:00:17 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/07 18:48:34 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int		i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char) c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    char str[] = "abcde";

    // Esperado: NULL (não procura nada)
    printf("%s\n", (char *)ft_memchr(str, 'a', 0));
    return (0);
}

esta main dá seg fault:
O que está a acontecer:

Na função ft_memchr, quando n == 0, o loop while (i < n) não é executado, 
e a função chega até o final sem fazer nada.

O que acontece depois?
Como não há nenhum valor encontrado, o código chega ao return (0);, 
que é um retorno de um ponteiro nulo (NULL).

    A solução:


#include <stdio.h>

int main(void)
{
    char str[] = "abcde";

    // Esperado: NULL (não procura nada)
    void *result = ft_memchr(str, 'a', 0);

    if (result != NULL)
        printf("%s\n", (char *)result);
    else
        printf("NULL\n");

    return (0);
}



Quando usas %s em printf, tens de garantir que o ponteiro não seja NULL 
antes de tentar imprimir. A solução seria verificar se o ponteiro retornado 
por ft_memchr é NULL antes de imprimir.

O segfault estava a acontecer porque %s não pode imprimir um ponteiro NULL. 
A solução é sempre verificar se o ponteiro retornado é NULL antes de tentar 
usá-lo em funções como printf que esperam um ponteiro válido.


----------------------------------------------------

notas:
"Cast" em C é basicamente uma conversão de tipo. Quando fazemos cast, 
estamos a dizer ao compilador para transformar uma variável de um tipo 
para outro. ex: return ((void *)&ptr[i]) para converter de 
const unsigned char para void * para não dar erro no compilador

Exemplo do cast com ponteiros

No caso da nossa função ft_memchr, estamos a usar cast porque temos:

    O ponteiro original s, que é do tipo const void *.

    Queremos devolvê-lo como void *, mas, no meio do caminho, temos um 
    ponteiro para const unsigned char *.

Porquê fazer cast nesse caso?

Imagina que a nossa função encontra o valor procurado no endereço ptr[i]. 
O tipo de ptr[i] é const unsigned char *. Para devolver esse endereço, 
precisamos de fazer cast para void *, porque é isso que a assinatura da 
função ft_memchr exige.

    &ptr[i] é do tipo const unsigned char *, mas a função tem de retornar void *.

    O cast transforma esse ponteiro const unsigned char * em void * para que o 
    tipo de retorno esteja correto.

    Em resumo:

    O cast é usado para converter tipos.

    Quando precisamos retornar um ponteiro de um tipo para outro, fazemos cast 
    para garantir que o tipo está correto.
No caso do ft_memchr, fazemos cast para void * porque queremos devolver um 
ponteiro genérico, embora a variável interna seja do tipo const unsigned char *.

*/
