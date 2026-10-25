/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaljabir <yaljabir@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:43:43 by yaljabir          #+#    #+#             */
/*   Updated: 2026/10/25 18:43:43 by yaljabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	free_all(char **arr, size_t n)
{
	while (n > 0)
		free(arr[--n]);
	free(arr);
}

static int	fill_words(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		arr[i] = ft_substr(s, 0, len);
		if (!arr[i])
		{
			free_all(arr, i);
			return (0);
		}
		i++;
		s += len;
	}
	arr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	if (!fill_words(arr, s, c))
		return (NULL);
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**arr;
	size_t	i;

	arr = ft_split("Hi,,Yomna,Hello", ',');
	if (!arr)
		return (1);
	i = 0;
	while (arr[i])
	{
		printf("arr[%zu] = %s\n", i, arr[i]);
		i++;
	}
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/