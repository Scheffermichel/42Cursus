#include "push_swap.h"

t_stack *ft_fill(int argc, char **argv)
{
	t_stack	*a;
	int 	i;
	int		j;

	a = NULL;
	i = 1;
	if (argc < 2)
		ft_error();
	while (i < argc)
	{
		j = ft_atoimod(argv[i]);
		ft_addback(&a, ft_newstack(j));
		i++;
	}
	return (a);
}

int main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_fill(argc, argv);
	if (!a || ft_checkdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!check_sort(a))
		do_sort(&a);
	ft_free(&a);
	return (0);
}