/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:38:46 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 17:38:47 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_position(t_num_list **stack)
{
	t_num_list	*current_node;
	t_num_list	*tmp;
	int			position;

	current_node = *stack;
	while (current_node != NULL)
	{
		position = 0;
		tmp = *stack;
		while (tmp != NULL)
		{
			if (current_node->value > tmp->value)
				position++;
			tmp = tmp->next;
		}
		current_node->index = position;
		current_node = current_node->next;
	}
}
