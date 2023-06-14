#include "push_swap.h"

void	push_to_another(t_stack **stack_src, t_stack **stack_dst)
{
	t_stack	*tmp;

	if (!stack_src)
	return ;

	tmp = (*stack_src)->next;
	(*stack_src)->next = *stack_dst;
	*stack_dst = *stack_src;
	*stack_src = tmp;
}

void	use_pa(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	use_pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

