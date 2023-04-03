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

	i = 0;
	if (right_spot_b(b, c))
		i = ft_lstsize(b) - right_spot_b(b, c);
	if ((i < (ft_lstsize(a) - find_index(a, c))) && find_index(a, c))
		i = ft_lstsize(a) - find_index(a, c);
	return (i);		
}

int	rrarbcase(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_index(a, c))
		i = ft_lstsize(a) - ft_find_index(a, c);
	i = right_spot_b(b, c) + i;
	return (i);	
}

int	rarrbcase(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (right_spot_b(b, c))
		i = ft_lstsize(b) - right_spot_b(b, c);
	i = find_index(a, c) + i;
	return (i);	
}
