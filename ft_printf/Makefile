SRC = ft_printf ft_printf_faux ft_printunsign
OBJ =  ${SRC:=.o}
NAME = libftprintf.a
LIB = ar rcs
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	${MAKE} -C Libft
	${LIB} ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}
	${MAKE} -C Libft clean

fclean: clean
	${RM} ${NAME}
	${MAKE} -C Libft fclean

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all re clean fclean norm