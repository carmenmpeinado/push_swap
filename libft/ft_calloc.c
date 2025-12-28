/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:04:24 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/19 18:25:00 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t mmry, size_t size)
{
	void	*ptr;

	if (size != 0 && mmry > ((size_t)-1) / size)
		return ((void *)0);
	ptr = malloc(mmry * size);
	if (!ptr)
		return ((void *)0);
	ft_bzero(ptr, mmry * size);
	return (ptr);
}
