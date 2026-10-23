/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:27:15 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/23 12:27:15 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[6];

	ft_memcpy(dest, src, sizeof(src));
	printf("src  = %s\n", src);
	printf("dest = %s\n", dest);
	return (0);
}
*/