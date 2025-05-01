/*  DESCRIPTION:
**    Allocates (with malloc(3)) and returns a “fresh” substring
**    from the string given as argument.
** 	 - The substring begins at index "start" and is of size len. 
**	 - If start and len aren’t refering to a valid substring, the behavior is undefined. 
**	 - If the allocation fails, the function returns NULL.
**    Param. #1 The string from which create the substring.
**    Param. #2 The start index of the substring.
**    Param. #3 The size of the substring.
**    Return value: The substring.
*/

// #include <libft.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*substr;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
                return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, &s[start], len);
	substr[len] = '\0';
	return (substr);
}
