#include <stddef.h>

char	*ft_strnstr(const char *str, const char *find, unsigned int len)
{
	int	i;
	int	j;

	i = 0;
	if (find[i] == '\0')
		return ((char *)str);

	while (str[i] && i < len)
	{
		j = 0;
		if(str[i] == find[j])
		{
			while(str[i + j] == find[j] && (i + j) < len && find [j] != '\0')
				j++;
			if (!find[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
A função strnstr(haystack, needle, len) procura a primeira ocorrência da needle (sub-string) dentro dos primeiros len caracteres de haystack.
Se needle estiver vazia, retorna o próprio haystack.
Se não encontrar nada, retorna NULL.
*/


