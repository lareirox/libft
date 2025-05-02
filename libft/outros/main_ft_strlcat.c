/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:01:46 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/17 11:01:59 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> // Para comparar com strlcat
#include <bsd/string.h> // strlcat está aqui em algumas distros (como Linux com libbsd)
                        // no macOS está na string.h normalmente

unsigned int    ft_strlcat(char *dest, const char *src, unsigned int destsize);

void    print_result(const char *label, char *dest, const char *src, unsigned int size)
{
    char    dest1[100] = {0};
    char    dest2[100] = {0};
    unsigned int r1, r2;

    // Copia strings iniciais para buffers separados
    strncpy(dest1, dest, sizeof(dest1) - 1);
    strncpy(dest2, dest, sizeof(dest2) - 1);

    r1 = ft_strlcat(dest1, src, size);
    r2 = strlcat(dest2, src, size);

    printf("%s:\n", label);
    printf("  ft_strlcat: [%s] return: %u\n", dest1, r1);
    printf("  strlcat   : [%s] return: %u\n\n", dest2, r2);
}

int main(void)
{
    // Caso normal
    print_result("Caso normal", "Ola, ", "mundo!", 20);

    // src vazio
    print_result("src vazio", "Texto", "", 10);

    // dest vazio
    print_result("dest vazio", "", "abc", 10);

    // Ambos vazios
    print_result("ambos vazios", "", "", 10);

    // Sem espaço para concatenar
    print_result("sem espaço", "123456789", "abc", 5);

    // dstsize == 0
    print_result("destsize == 0", "alguma coisa", "coisa nova", 0);

    // dstsize < strlen(dest)
    print_result("destsize < strlen(dest)", "olaaa", "abc", 3);

    return (0);
}

