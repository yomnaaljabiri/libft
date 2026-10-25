/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:18:39 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 22:18:39 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %d\n", ft_isascii('A'));
	printf(" %d\n", ft_isascii(0));
	printf(" %d\n", ft_isascii(127));
	printf(" %d\n", ft_isascii(128));
	printf(" %d\n", ft_isascii(-1));
	return (0);
}*/