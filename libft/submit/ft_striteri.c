/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:30:04 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/07 18:54:22 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//o ft_striteri é uma função que vai aplicar uma função f a cada caracter de 
//uma string, e a f recebe:
//	o índice do caracter (posição),
//	o endereço do caracter (ou seja, um char * que aponta para esse caracter, 
//para que possas modificar o caracter dentro de f).

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <unistd.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char *));

void to_upper(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}


int main(void)
{
    char str[] = "abc 1 def";

    write(1, "Antes: ", 7);
    write(1, str, 9);
    write(1, "\n", 1);

    ft_striteri(str, to_upper);

    write(1, "Depois: ", 8);
    write(1, str, 9);
    write(1, "\n", 1);

    return (0);
}
*/
