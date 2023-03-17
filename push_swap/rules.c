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
