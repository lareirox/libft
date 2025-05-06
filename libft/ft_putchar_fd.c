/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:13:50 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/06 17:51:32 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>   // para open()
#include <unistd.h>  // para write(), close()
#include "libft.h"   // para ft_putchar_fd()

int main(void)
{
    int fd;

    // Teste 1: Escrever no stdout (terminal)
    write(1, "Teste stdout: ", 14);
    ft_putchar_fd('A', 1);
    write(1, "\n", 1);

    // Teste 2: Escrever no stderr
    write(2, "Teste stderr: ", 14);
    ft_putchar_fd('B', 2);
    write(2, "\n", 1);

    // Teste 3: Escrever num ficheiro
    fd = open("teste.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1)
        return (1);  // Se falhar o open, sair

    write(1, "Escrevendo no ficheiro...\n", 26);
    ft_putchar_fd('C', fd);
    close(fd);

    return (0);
}
*/
