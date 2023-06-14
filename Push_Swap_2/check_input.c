#include "push_swap.h"

int	is_number(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]) && argv[i + 1])
		i++;
	while (argv[i] && is_digit(argv[i]))
		i++;
	if (argv[i] && !is_digit(argv[i]))
		return (0);
	return (1);		
}

int	duplicate_digit(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[j])
		{
			if (i != j && string_compare(argv[i], argv[j]) == 0)
				return (1);
			j++;	
		}
		i++;
	}
	return (0);
}

int is_zero(char *argv)
{
	int i;

	i = 0;
	if (is_sign(argv[i]))
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);			
}

int	check_input(char **argv)
{
	int	i;
	int	zero;

	i = 0;
	zero = 0;
	while (argv[++i] != 0)
	{
		if (!is_number(argv[i]))
			return (0);
		zero += is_zero(argv[i]);	
	}
	if (zero > 1)
		return (0);
	if (duplicate_digit(argv))
		return (0);
	return (1);	
}