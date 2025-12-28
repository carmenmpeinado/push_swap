/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:38:47 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/19 18:18:17 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

num_list	*ft_lstnew(int value)
{
	num_list	*newlst;

	newlst = (num_list *)malloc(sizeof (num_list));
	if (!newlst)
		return (NULL);
	newlst->value = value;
	newlst->next = NULL;
	return (newlst);
}
