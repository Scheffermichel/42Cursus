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
void	ft_rra(t_stack **a);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_sb(t_stack **b);
void	ft_rb(t_stack **b);
void	ft_pb(t_stack **b, t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rrr_aux(t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
void	ft_addback(t_stack **stack, t_stack *stack_new);
void	check_argv(char **argv);
void	ft_sort_three(t_stack **a);
int		ft_checkdup(t_stack *a);
int		ft_isalpha(int c);
int		sign(int c);
int		digit(int c);
int		space(int c);
int		check_err(char **argv, int i, int j);
int		check_args(char **argv);
int		ft_atoimod(const char *nptr);
int		ft_do_rarb(t_stack **a, t_stack **b, int c, char s);
int		ft_do_rrarrb(t_stack **a, t_stack **b, int c, char s);
int		ft_do_rrarb(t_stack **a, t_stack **b, int c, char s);
int		ft_do_rarrb(t_stack **a, t_stack **b, int c, char s);
int		find_index(t_stack *a, int num);
int		right_spot_b(t_stack *b, int num_push);
int		right_spot_a(t_stack *a, int num_push)
t_stack	*ft_fill(int argc, char **argv);
t_stack	*ft_newstack(int nbr);
t_stack	*ft_lstlast(t_stack *lst);

#endif
