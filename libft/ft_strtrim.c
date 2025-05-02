//#include "libft.h"

char	*ft_strtrim(char const *s1, char const set)
{
	char	*tstr;
	int	i;
	int 	fim;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i])
		i++;
	fim = (ft_strlen(s1) - 1); // -1 para exluir o '/0' do final da string
	while (fim >= 0 && ft_strchr(set, s1[fim])
                fim--;
	if (fim < i)
		return (ft_strdup(""));
	tstr = ft_substr(s1, i, (fim - i + 1)); // +1 para crescentyar o nulo | parametros (str, inicio, lengh)
	return (tstr);
}


/*notas
 * esta ft serve para remover caracteres de 'set' no início e no fim de s1
 * ex: s1 = " 42Porto  " | set = " "
 * Aqui queremos remover todos os espaços no início e no fim → o resultado seria "42Porto".
 * s1 = "--42--" | set = "- "
 * Aqui queremos remover "-" e espaços no início e fim → resultado "42".
