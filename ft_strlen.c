/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:56:48 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 22:56:48 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %zu\n", ft_strlen("hello"));
	printf(" %zu\n", ft_strlen(""));
	printf(" %zu\n", ft_strlen("A"));
	printf(" %zu\n", ft_strlen("hello world"));
	return (0);
}*/