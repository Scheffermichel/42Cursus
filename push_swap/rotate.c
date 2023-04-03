#include "push_swap.h"

int	rotate_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = rrarrbcase_a(a, b, b->num);
	while (tmp)
	{
		if (i > rarbcase_a(a, b, tmp->num))
			i = rarbcase_a(a, b, tmp->num);
		if (i > rrarrbcase_a(a, b, tmp->num))
			i = rrarrbcase_a(a, b, tmp->num);
		if (i > rarrbcase_a(a, b, tmp->num))
			i = rarrbcase_a(a, b, tmp->num);
		if (i > rrarbcase_a(a, b, tmp->num))
			i = rrarbcase_a(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}

int	rotate_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = rrarrbcase(a, b, b->num);
	while (tmp)
	{
		if (i > rarbcase_a(a, b, tmp->num))
			i = rarbcase_a(a, b, tmp->num);
		if (i > rrarrbcase_a(a, b, tmp->num))
			i = rrarrbcase_a(a, b, tmp->num);
		if (i > rarrbcase_a(a, b, tmp->num))
			i = rarrbcase_a(a, b, tmp->num);
		if (i > rrarbcase_a(a, b, tmp->num))
			i = rrarbcase_a(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);

}