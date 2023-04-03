#include "push_swap.h"

int	rarbcase_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = right_spot_a(a, c);
	if (i < find_index(b, c))
		i = find_index(b, c);
	return (i);	
}

int rrarrbcase_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (right_spot_a(a, c))
		i = ft_lstsize(a) - right_spot_a(a, c);
	if ((i < (ft_lstsize(b) - find_index(b, c))) && find_index(b, c))
		i = ft_lstsize(b) - find_index(b, c);
	return (i);	
}

int	rarrbcase_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_index(b, c))
		i = ft_lstsize(b) - find_index(b, c);
	i = right_spot_a(a, c) + i;
	return (i);	
}

int	rrarbcase_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (right_spot_a(a, c))
		i = ft_lstsize(a) - right_spot_a(a, c);
	i = find_index(b, c) + i;
	return (i);	
}
