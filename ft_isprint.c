#include "libft.h"
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %d\n", ft_isprint(31));
	printf(" %d\n", ft_isprint(32));
	printf(" %d\n", ft_isprint('A'));
	printf(" %d\n", ft_isprint(126));
	printf(" %d\n", ft_isprint(127));
	return (0);
}*/