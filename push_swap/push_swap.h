#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <Libft/libft.h>


typedef struct s_stack
{
	long	num;
	long	index;
	struct s_stack	*next;
	struct s_stack 	*prev;

}					t_stack;

void	ft_error();
void	ft_free(t_stack **lst);
t_stack	*ft_fill(int argc, char **argv);
t_stack	*ft_newstack(int nbr);


#endif
