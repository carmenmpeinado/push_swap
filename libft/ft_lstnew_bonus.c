/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:38:47 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 17:33:16 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_num_list	*ft_lstnew(int value)
{
	t_num_list	*newlst;

	newlst = (t_num_list *)malloc(sizeof (t_num_list));
	if (!newlst)
		return (NULL);
	newlst->value = value;
	newlst->next = NULL;
	return (newlst);
}
