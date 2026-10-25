/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:29:49 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 22:29:49 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %s\n", ft_strchr("hello", 'e'));
	printf(" %s\n", ft_strchr("banana", 'a'));
	printf(" %s\n", ft_strchr("hello", '\0'));
	printf(" %d\n", ft_strchr("hello", 'z') == NULL);
	return (0);
}*/