/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:57:24 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/19 10:49:39 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*dst;
	size_t	dst_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dst_len = s1_len + s2_len;
	dst = malloc(dst_len + 1);
	if (!dst)
		return (0);
	ft_strlcpy(dst, s1, s1_len + 1);
	ft_strlcat(dst, s2, dst_len + 1);
	return (dst);
}
