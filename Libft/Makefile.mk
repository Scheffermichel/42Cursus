FUNC = ${wildcard *.c}
OBJ = ${FUNC: .c=.o}
INS = includes
NAME = libft.a
LIB = ar rc
RL = ranlib
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} 