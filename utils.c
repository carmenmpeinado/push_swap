#include "push_swap.h"

void	free_split(char **args)
{
	int	i;

	if (!args)
		return ;
	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free (args);
}

static int	how_many_nums(char **argv)
{
	int	i;
	int	j;
	int	count;
	char	**split;

	i = 0;
	count = 0;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (-1);
		j = 0;
		while (split[j])
		{
			count++;
			j++;
		}
		free_split(split);
		i++;
	}
	return (count);
}

static char	**fill_result(char **result, char **argv)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (NULL);
		j = 0;
		while (split[j])
		{
			result[k] = split[j];
			k++;
			j++;
		}
		free(split);
		i++;
	}
	result[k] = NULL;
	return (result);
}

char	**normalize_input(char **argv)
{
	char	**result;
	int		total_nums;

	total_nums = how_many_nums(argv);
	if (total_nums <= 0)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (total_nums + 1));
	if (!result)
		return (NULL);
	result = fill_result(result, argv);
	if (!result)
	{
		free(result);
		return (NULL);
	}
	return (result);
}
