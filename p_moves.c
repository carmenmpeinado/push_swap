/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:39:02 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 17:42:20 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	pa(t_num_list **stack_a, t_num_list **stack_b)
{
	t_num_list	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_num_list **stack_a, t_num_list **stack_b)
{
	t_num_list	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	write(1, "pb\n", 3);
}
