#include "push_swap.h"

void	sort_push_b(t_stack **a, t_stack **b)
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
				i = ft_do_rarrb(a, b, tmp->num, 'a');
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
		i = rotate_ba(*a, *b);
		while (i >= 0)
		{
			if (i == rarbcase_a(*a, *b, tmp->num))
				i = ft_do_rarb(a, b, tmp->num, 'b');
			else if (i == rarrbcase_a(*a, *b, tmp->num))
				i = ft_do_rarrb(a, b, tmp->num, 'b');
			else if (i == rrarrbcase_a(*a, *b, tmp->num))
				i = ft_do_rrarrb(a, b, tmp->num, 'b');
			else if (i == rrarbcase_a(*a, *b, tmp->num))
				i = ft_do_rrarb(a, b, tmp->num, 'b');
			else
				tmp = tmp->next;				
		}
	}
	return (a);
}

void	do_sort(t_stack **a)
{
	t_stack	*b;
	int		i;

	b = NULL;
	if (ft_lstsize(*a) == 2)
		ft_sa(a);
	else
	{
		b = sort_b(a);
		a = sort_a(a, &b);
		i = find_index(*a, ft_min(*a));
		if (i < ft_lstsize(*a) - i)
		{
			while ((*a)->num != ft_min(*a))
				ft_ra(a);
		}
		else
		{
			while ((*a)->num != ft_min(*a))
				ft_rra(a);
		}
	}
}