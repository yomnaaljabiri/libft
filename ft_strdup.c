/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:51:50 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/25 17:51:50 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len + 1);
	return (dup);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "Hello";
	char	*dup;

	dup = ft_strdup(s);
	if (!dup)
		return (1);
	printf("Original: %s\n", s);
	printf("Copy:     %s\n", dup);
	dup[0] = 'J';
	printf("After changing the copy:\n");
	printf("Original: %s\n", s);
	printf("Copy:     %s\n", dup);
	free(dup);
	return (0);
}
*/