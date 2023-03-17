#include "push_swap.h"

int	ft_checkdup(t_stack *a)
{
	t_stack *tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->num == tmp->num)
				return (1);
			tmp = tmp->next;	
		}
		a = a->next;
	}
	return (0);
}
