/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:15:42 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 22:15:42 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>
int	main(void)
{
	printf(" %d\n", ft_isalpha('a'));
	printf(" %d\n", ft_isalpha('Z'));
	printf(" %d\n", ft_isalpha('5'));
	printf(" %d\n", ft_isalpha('@'));
	printf(" %d\n", ft_isalpha(' '));
	return (0);
}*/