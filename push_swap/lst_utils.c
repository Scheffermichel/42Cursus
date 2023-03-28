#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	size_t	i;

	i = 0;
	while(lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	ft_min(t_stack *a)
{
	int i;

	i = a->num;
	while (a)
	{
		if (a->num < i)
			i = a->num;
		a = a->next;	
	}
	return (i);
}

int	ft_max(t_stack *a)
{
	int	i;

	i = a->num;
	while (a)
	{
		if (a->num > i)
			i = a->num;
		a = a->next;	
	}
	return (i);
}
