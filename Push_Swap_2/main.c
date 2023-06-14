#include "push_swap.h"

t_stack	*fill_stack(int argc, char **argv)
{
	long int	nbr;
	int			i;
	t_stack		*stack_a;

	nbr = 0;
	i = 1;
	stack_a = NULL;
	while (i < argc)
	{
		nbr = ft_atoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			exec_error();
		if (i == 1)
			stack_a = new_node(nbr);
		else
			insert_at_end(&stack_a, new_node(nbr));	
		i++;
	}
	return (stack_a);	
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc <= 2)
		return (0);	
	if (!check_input(argv))
		exec_error();
	stack_b = NULL;
	stack_a = fill_stack(argc, argv);
	if (!check_sorted(&stack_a))
		sort_stack(stack_a);
	free_stack(stack_a);
	return (0);
}		