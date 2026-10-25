/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:17:44 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/23 16:17:44 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (n == 0 || size == 0)
		return (malloc(1));
	if (n > (size_t)-1 / size)
		return (NULL);
	p = malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	int		*p;
	size_t	i;
	void	*test;

	p = ft_calloc(3, sizeof(int));
	if (!p)
		return (1);
	i = 0;
	while (i < 3)
	{
		printf("p[%zu] = %d\n", i, p[i]);
		i++;
	}
	free(p);
	test = ft_calloc((size_t)-1, 2);
	if (test == NULL)
		printf("Overflow detected\n");
	free(test);
	return (0);
}
*/