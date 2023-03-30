#include "push_swap.h"

void	ft_sort_three(t_stack **a)
{
	if (ft_min(*a) == (*a)->num)
	{
		ft_rra(a);
		ft_sa(a);
	}
	else if (ft_max(*a) == (*a)->num)
	{
		ft_ra(a);
		if (!check_sort(*a))
			ft_sa(a);	
	}
	else
	{
		if (find_index(*a, ft_max(*a)) == 1)
			ft_rra(a);
		else
			ft_sa(a);	
	}
}