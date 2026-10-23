/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 23:01:38 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 23:01:38 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %d\n", ft_strncmp("hello", "hello", 5));
	printf(" %d\n", ft_strncmp("abc", "abd", 3));
	printf(" %d\n", ft_strncmp("abd", "abc", 3));
	printf(" %d\n", ft_strncmp("abc", "abd", 2));
	printf(" %d\n", ft_strncmp("abc", "abcd", 4));
	printf(" %d\n", ft_strncmp("abc", "xyz", 0));
	return (0);
}*/