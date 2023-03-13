#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <Libft/libft.h>
#include <cstdlib.h>


typedef struct s_stack
{
	long	num;
	long	index;
	struct s_stack	*next;
	struct s_stack 	*prev;

}			t_stack; 

#endif
