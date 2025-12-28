/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:44:03 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/18 17:00:12 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	countwords(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*words(const char *s, char c, size_t *i)
{
	size_t	start;
	size_t	end;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	end = *i;
	return (ft_substr(s, start, end - start));
}

static void	free_split(char **result, size_t j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

static char	**fill_split(const char *s, char c, size_t word_count)
{
	char	**array;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (j < word_count)
	{
		array[j] = words(s, c, &i);
		if (!array[j])
		{
			free_split(array, j);
			return (NULL);
		}
		j++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = countwords(s, c);
	return (fill_split(s, c, word_count));
}
