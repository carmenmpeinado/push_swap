#include "libft/libft.h"
#include "push_swap.h"

void	free_stack(num_list **stack)
{
	num_list	*tmp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

int	build_stacks(num_list **stack_a, num_list **stack_b, char **argv)
{
	int	i;
	num_list	*info_in;

	*stack_a = NULL;
	*stack_b = NULL;
	i = 0;
	while (argv[i])
	{
		info_in = ft_lstnew(ft_atoi(argv[i]));
		if (!info_in)
		{
			free_stack(stack_a);
			return (0);
		}
		ft_lstadd_back(stack_a, info_in);
		i++;
	}
	return (1);
}

int	push_swap(char **numbers)
{
	num_list	*stack_a;
	num_list	*stack_b;

	if (!build_stacks(&stack_a, &stack_b, numbers))
		return (0);
	if (!sorted(stack_a))
	{
		if (ft_lstsize(stack_a) <= 5)
			quick_sort(&stack_a, &stack_b, ft_lstsize(stack_a));
		else
			radix_sort(&stack_a, &stack_b);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (1);
}

int	main(int argc, char **argv)
{
	char	**array_of_nums;

	if (argc < 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	array_of_nums = normalize_input(argv + 1);
	if (!array_of_nums || !is_input_ok(array_of_nums))
	{
		write(2, "Error\n", 6);
		if (array_of_nums)
			free_split(array_of_nums);
		return (1);
	}
	if (!push_swap(array_of_nums))
	{
		free_split(array_of_nums);
		return (1);
	}
	free_split(array_of_nums);
	return (0);
}
