/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:07:27 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/23 12:07:27 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello";

	ft_memset(str, 'A', 3);
	printf("%s\n", str);
	return (0);
}
*/