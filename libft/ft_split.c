#include "libft.h"


{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);// contador de palavras ou elementos

}







/* notas
 * Exemplo:
 * ft_split("hello world test", ' ') //  Deve retornar -> ["hello", "world", "test", NULL]

Temos:
    Uma string s
    Um carácter c que é o separador (o delimiter)
O objetivo é:
    Dividir a string sempre que encontramos c
    Guardar cada parte (palavra) num array de strings
    O array de strings termina com um ponteiro NULL

** DESCRIPTION: Allocates (with malloc(3)) and returns an array of strings 
** 		obtained by splitting ’s’ using the character ’c’ as a 
**		delimiter. The array must end with a NULL pointer.

*/
