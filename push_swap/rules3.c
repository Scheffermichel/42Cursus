#include "push_swap.h"

void	ft_ss(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	write(1, "ss\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		return ;
	tmp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	tmp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = tmp;
	(*b) = tmp->next;
	tmp->next = NULL;
	write(1, "rr\n", 3);	
}

void	ft_rrr_aux(t_stack **b)
{
	t_stack	*tmp;
	int		i;

	if (!*b || !(*b)->next)
		return ;
	i = 0;	
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	write(1, "rrr\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	t_stack *tmp;
	int		i;

	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
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
	ft_rrr_aux(b);
}
