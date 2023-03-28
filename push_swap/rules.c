#include "push_swap.h"

void	ft_sa(t_stack **a)
{
	t_stack *tmp;
 
	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	write(1, "sa\n", 3);
}

void	ft_ra(t_stack **a)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	(*a)->next = tmp;
	*b = (*b)->next;
	write(1, "pa\n", 3);
}

void	ft_rra(t_stack **a)
{
	t_stack *tmp;
	int		i;

	if(!*a || !(*a)->next)
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

