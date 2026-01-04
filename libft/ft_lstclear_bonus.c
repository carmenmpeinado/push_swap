/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:37:52 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 17:32:22 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_num_list **lst)
{
	t_num_list	*lstnext;

	if (!lst)
		return ;
	while (*lst)
	{
		lstnext = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = lstnext;
	}
	*lst = NULL;
}
