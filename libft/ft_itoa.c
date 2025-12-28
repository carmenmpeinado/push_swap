/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:35:17 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/18 16:53:20 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitcount(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n != 0)
	{
		if (n < 0)
		{
			digit++;
			n = -n;
		}
		while (n != 0)
		{
			n = n / 10;
			digit++;
		}
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*array;
	long	nbr;

	nbr = n;
	len = digitcount(n);
	array = malloc(len + 1);
	if (!array)
		return (0);
	array[len--] = '\0';
	if (nbr == 0)
		array[0] = '0';
	if (nbr < 0)
	{
		array[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		array[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (array);
}
