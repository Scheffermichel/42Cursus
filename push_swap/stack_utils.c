#include "push_swap.h"

int	find_index(t_stack *a, int num)
{
	int i;

	i = 0;
	while (a->num != num)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int	right_spot_b(t_stack *b, int num_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (num_push > b->num && num_push < ft_lstlast(b)->num)
		i = 0;
	else if (num_push > ft_max(b) || num_push < ft_min(b))
		i = find_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->num < num_push || tmp->num > num_push)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	right_spot_a(t_stack *a, int num_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (num_push > a->num && num_push < ft_lstlast(a)->num)
		i = 0;
	else if (num_push > ft_max(a) || num_push < ft_min(a))
		i = find_index(a, ft_max(a));
	else
	{
		tmp = a->next;
		while (a->num < num_push || tmp->num > num_push)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}