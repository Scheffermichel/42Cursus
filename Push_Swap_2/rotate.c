#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*bottom;

	tmp = *stack;
	*stack = (*stack)->next;
	bottom = get_bottom(*stack);
	tmp->next = NULL;
	bottom->next = tmp;
	tmp->next = NULL;
}

void	use_ra(t_stack **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	use_rb(t_stack **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	use_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}