/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:09:29 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/22 22:09:29 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("A: %d\n", ft_isalnum('A'));
	printf("5: %d\n", ft_isalnum('5'));
	printf("@: %d\n", ft_isalnum('@'));
	printf("space: %d\n", ft_isalnum(' '));
	return (0);
}*/