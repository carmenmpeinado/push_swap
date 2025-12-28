/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:04:44 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/09 18:08:53 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	symbol;

	str = (unsigned char *)s;
	symbol = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == symbol)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
