/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 23:16:00 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 23:16:00 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %c\n", ft_toupper('a'));
	printf(" %c\n", ft_toupper('z'));
	printf(" %c\n", ft_toupper('A'));
	printf(" %c\n", ft_toupper('5'));
	printf(" %c\n", ft_toupper('@'));
	return (0);
}
*/