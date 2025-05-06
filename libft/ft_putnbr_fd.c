/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:28:59 by nugoncal          #+#    #+#             */
/*   Updated: 2025/05/06 17:56:00 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
int main()
{
    ft_putnbr_fd(1235, 1);          // número positivo simples
    write(1, "\n", 1);
    ft_putnbr_fd(-5678, 1);         // número negativo simples
    write(1, "\n", 1);
    ft_putnbr_fd(0, 1);             // zero
    write(1, "\n", 1);
    ft_putnbr_fd(-2147483648, 1);   // INT_MIN
    write(1, "\n", 1);
    return (0);
}
*/
/* DESCRIPTION:
**  Outputs the integer ’n’ to the given file descriptor.
*/
