#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
	long	num;
	long	index;
	struct s_stack	*next;
	struct s_stack 	*prev;
}					t_stack;

void	ft_error();
void	ft_free(t_stack **lst);
void	ft_sa(t_stack **a);
void	ft_ra(t_stack **a);
void	ft_addback(t_stack **stack, t_stack *stack_new);
int		ft_checkdup(t_stack *a);
int		ft_atoimod(const char *nptr);
t_stack	*ft_fill(int argc, char **argv);
t_stack	*ft_newstack(int nbr);
t_stack	*ft_lstlast(t_stack *lst);

#endif
