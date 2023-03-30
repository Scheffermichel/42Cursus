#include "push_swap.h"

int	rarbcase(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = right_spot_b(b, c);
	if (i < find_index(a, c))
		i = find_index(a, c);
	return (i);	
}

int	rrarrbcase(t_stack *a, t_stack *b, int c)
{
	int	i;
	
}