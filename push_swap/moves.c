#include "push_swap.h"

int	ft_do_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && right_spot_b(*b, c) > 0)
			ft_rr(a, b);
		while ((*a)->num != c)
			ft_ra(a);
		while (right_spot_b(*b, c) > 0)
			ft_rb(b);
		ft_pb(a, b);			
	}
	else
	{
		while ((*b)->num != c && right_spot_a(*a, c) > 0)
			ft_rr(a, b);
		while ((*b)->num != c)
			ft_rb(b);
		while (right_spot_a(*a, c) > 0)
			ft_ra(a);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_do_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && right_spot_b(*b, c) > 0)
			ft_rrr(a, b);
		while ((*a)->num != c)
			ft_rra(a);
		while (right_spot_b(*b, c) > 0)
			ft_rrb(b);
		ft_pb(a, b);			
	}
	else
	{
		while ((*b)->num != c && right_spot_a(*a, c) > 0)
			ft_rrr(a, b);
		while ((*b)->num != c)
			ft_rrb(b);
		while (right_spot_a(*a, c) > 0)
			ft_rra(a);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_do_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c)
			ft_rra(a);
		while (right_spot_b(*b, c) > 0)
			ft_rb(b);
		ft_pb(a, b);		
	}
	else
	{
		while (right_spot_a(*a, c) > 0)
			ft_rra(a);
		while ((*b)->num != c)
			ft_rb(b);
		ft_pa(a, b);		
	}
	return (-1);
}

int	ft_do_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c)
			ft_ra(a);
		while (right_spot_b(*b, c) > 0)
			ft_rrb(b);
		ft_pb(a, b);		
	}
	else
	{
		while (right_spot_a(*a, c) > 0)
			ft_ra(a);
		while ((*b)->num != c)
			ft_rrb(b);
		ft_pa(a, b);		
	}
	return (-1);
}