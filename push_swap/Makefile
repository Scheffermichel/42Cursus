SRC = checkers checkers2 ft_buildstack ft_free ft_printerror \
	ft_utils lst_utils rules rules2 rules3 \
	stack_utils main 
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

norm:
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all re clean fclean norm