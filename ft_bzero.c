/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 21:55:28 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 21:55:28 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello";
	int		i;

	ft_bzero(str, 3);
	i = 0;
	while (i < 5)
	{
		printf("%d ", str[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/