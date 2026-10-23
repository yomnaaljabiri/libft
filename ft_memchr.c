#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "banana";
	char	*result;

	result = ft_memchr(str, 'a', 3);
	if (result != NULL)
		printf("result = %s\n", result);
	else
		printf("Character not found\n");
	return (0);
}
*/