#include "push_swap.h"

void	swap(t_stack *stack)
{
	long int	i;
	long int	j;
	long int	p1;
	long int	p2;

	p1 = stack->index;
	p2 = stack->next->index;
	i = stack->num;
	j = stack->next->num;
	stack->num = j;
	stack->next->num = i;
	stack->index = p2;
	stack->next->index = p1;
}

void	do_sa(t_stack *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	do_sb(t_stack *stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	do_ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}