/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:39:45 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/23 11:39:45 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[6];
	size_t	result;

	result = ft_strlcpy(dst, "Hello World", sizeof(dst));
	printf("dst = %s\n", dst);
	printf("return = %zu\n", result);
	return (0);
}*/