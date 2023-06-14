SRC = 
OBJ =  ${SRC:=.o}
NAME = push_swap.a
INCLUDE = Libft/libft.h
LIB = ar rcs
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	${LIB} ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all re clean fclean 