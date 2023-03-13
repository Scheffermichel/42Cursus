#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;

	if (argc < 2)
		ft_error();
	ft_sort(&a);
	ft_free(&a);
	return (0);
}