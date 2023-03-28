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

int	ft_isalpha(int c)
{
	if ((c >= 58 && c <= 126) || (c >= 33 && c <= 42) 
		|| c == 44 || c == 46 || c == 47)
		return (1);
	return (0);	 
}

void	check_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_isalpha(argv[i][j]))
				ft_error();
			j++;	
		}
		i++;
	}
}

int	check_args(char **argv)
{
	check_argv(argv);
	if (!check_err(argv, 1, 0))
		return (0);
	return (1);	
}

int	check_sort(t_stack *a)
{
	int	i;

	i = a->num;
	while (a)
	{
		if (i > a->num)
			return (0);
		i = a->num;
		a = a->next;	
	}
	return (1);
}