/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:10:16 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/17 11:15:26 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

#include <stdio.h>
/*
// Aqui deves colocar a tua função ft_toupper
int	ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}
*/
int main(void)
{
    // Testes com letras minúsculas
    printf("ft_toupper('a') = %c\n", ft_toupper('a')); // Esperado: A
    printf("ft_toupper('z') = %c\n", ft_toupper('z')); // Esperado: Z
    printf("ft_toupper('m') = %c\n", ft_toupper('m')); // Esperado: M

    // Testes com letras maiúsculas (não deve mudar)
    printf("ft_toupper('A') = %c\n", ft_toupper('A')); // Esperado: A
    printf("ft_toupper('Z') = %c\n", ft_toupper('Z')); // Esperado: Z

    // Testes com números e símbolos (não deve mudar)
    printf("ft_toupper('1') = %c\n", ft_toupper('1')); // Esperado: 1
    printf("ft_toupper('#') = %c\n", ft_toupper('#')); // Esperado: #

    // Teste com valor fora da tabela ASCII visível
    printf("ft_toupper(200) = %c\n", ft_toupper(200)); // Vai depender do terminal, mas não deve crashar

    return (0);
}

