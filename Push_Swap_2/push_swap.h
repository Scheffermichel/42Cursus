#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct s_stack
{
	long			num;
	long			index;
	struct s_stack	*next;
}					t_stack;

#endif