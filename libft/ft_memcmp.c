int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;

	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h> // for original memcmp
#include <unistd.h>

int main(void)
{
    // Test 1: n = 0
    printf("Test 1: n = 0\n");
    printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp("abc", "xyz", 0), memcmp("abc", "xyz", 0));

    // Test 2: Same strings
    printf("Test 2: Same strings\n");
    printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp("abc", "abc", 3), memcmp("abc", "abc", 3));

    // Test 3: Difference in first byte
    printf("Test 3: Difference in first byte\n");
    printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp("abc", "xbc", 3), memcmp("abc", "xbc", 3));

    // Test 4: Difference in last byte
    printf("Test 4: Difference in last byte\n");
    printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp("abc", "abd", 3), memcmp("abc", "abd", 3));

    // Test 5: One string shorter, comparing beyond null byte
    printf("Test 5: Compare past null terminator\n");
    printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp("abc", "abc\0xyz", 7), memcmp("abc", "abc\0xyz", 7));

    return (0);
}
