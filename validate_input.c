/* 

no simbols, no letters, just numbers and - / + / spaces
no min / max integers
no duplicates
no void

*/

#include "libft/libft.h"
#include "push_swap.h"

int	checked_duplicates(char **numbers)
{
	int	i;
	int	j;

	i = 0;
	while (numbers[i])
	{
		j = i + 1;
		while (numbers[j])
		{
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
static int	is_number(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
static int	number_is_valid(char *s)
{
	long long	num;
	long long	minimum;
	int			i;
	int			sign;

	i = 0;
	num = 0;
	sign = 1;
	minimum = 2147483648LL;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i])
	{
		num = num * 10 + (s[i] - '0');
		if ((sign == 1 && num > 2147483647) || (sign == -1 && num > minimum))
			return (0);
		i++;
	}
	return (1);
}

int	is_input_ok(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!is_number(argv[i]) || !number_is_valid(argv[i]))
			return(0);
		i++;
	}
	if (checked_duplicates(argv))
		return (0);
	return (1);
}
