/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:20:06 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 22:20:06 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %d\n", ft_isdigit('0'));
	printf(" %d\n", ft_isdigit('5'));
	printf(" %d\n", ft_isdigit('9'));
	printf(" %d\n", ft_isdigit('A'));
	printf(" %d\n", ft_isdigit('@'));
	return (0);
}*/