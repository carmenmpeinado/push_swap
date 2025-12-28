#include "push_swap.h"

void	assign_position(num_list **stack)
{
	num_list	*current_node;
	num_list	*tmp;
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
