#include "push_swap.h"

void	 sort_push_b(t_stack **a, t_stack **b)
{
	int	i;
	t_stack *tmp;

	while (ft_lstsize(*a) > 3 && !check_sort(*a))
	{
		tmp = *a;
		i = rotate_ab(*a, *b);
		while (i >= 0)
		{
			if (i == rarbcase(*a, *b, tmp->num))
				i = ft_do_rarb(a, b, tmp->num, 'a');
			else if (i == rrarrbcase(*a, *b, tmp->num))
				i = ft_do_rrarrb(a, b, tmp->num, 'a');
			else if (i == rarrbcase(*a, *b, tmp->num))
				i = ft_do_rarrbcase(a, b, tmp->num, 'a');
			else if (i == rrarbcase(*a, *b, tmp->num))
				i = ft_do_rrarb(a, b, tmp->num, 'a');
			else
				tmp = tmp->next;	
		}
	}
}

t_stack *sort_b(t_stack **a)
{
	t_stack *b;

	b = NULL;
	if (ft_lstsize(*a) > 3 && !check_sort(*a))
		ft_pb(a, &b);
	if (ft_lstsize(*a) > 3 && !check_sort(*a))
		ft_pb(a, &b);
	if (ft_lstsize(*a) > 3 && !check_sort(*a))
		sort_push_b(a, &b);
	if (!check_sort(*a))
		ft_sort_three(a);
	return (b);
}

t_stack	**sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (*b)
	{
		tmp = *b;
		i = rotate_ba;
	}
}
