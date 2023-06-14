#include "push_swap.h"

int	exec_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	while (*nptr == '\f' || *nptr == ' ' || *nptr == '\r'
		|| *nptr == '\n' || *nptr == '\t' || *nptr == '\v')
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}	
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (res * sign);
}

int	check_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;	
	}
	return (1);
}