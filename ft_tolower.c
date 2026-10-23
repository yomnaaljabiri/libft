/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 23:15:54 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 23:15:54 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %c\n", ft_tolower('A'));
	printf(" %c\n", ft_tolower('Z'));
	printf(" %c\n", ft_tolower('a'));
	printf(" %c\n", ft_tolower('5'));
	printf(" %c\n", ft_tolower('@'));
	return (0);
}
*/