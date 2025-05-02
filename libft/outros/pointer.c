/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 09:31:22 by nugoncal          #+#    #+#             */
/*   Updated: 2025/04/12 09:32:32 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    char letter = 'A';
    char *ptr = &letter;

    printf("Address of letter: %p\n", &letter);  // Shows memory address
    printf("Value at that address (via *ptr): %c\n", *ptr);  // Should show 'A'

    *ptr = 'Z';  // Change value via pointer

    printf("Now letter = %c\n", letter);  // Should show 'Z'

    return 0;
}

