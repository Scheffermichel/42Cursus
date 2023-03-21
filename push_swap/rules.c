#include "push_swap.h"

void	ft_sa(t_stack **a)
{
	t_stack *tmp;
 
	if (!a || !((*a)->next))
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

	if (!a || !(*a)->next)
		return ;
	tmp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

/*void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	(*a)->next = tmp;
}*/