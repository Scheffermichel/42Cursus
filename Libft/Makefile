SRC = ft_isalpha ft_isdigit ft_isalnum ft_isprint  ft_isascii\
		ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove \
		ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr \
		ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi \
		ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim \
		ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd \
		ft_strrchr ft_putendl_fd ft_putnbr_fd ft_split
SRC_BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast	ft_lstadd_back \
		ft_lstdelone ft_lstclear ft_lstiter ft_lstmap
OBJ =  ${SRC:=.o}
OBJ_BONUS = ${SRC_BONUS:=.o}
NAME = libft.a
LIB = ar rcs
RL = ranlib
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	${LIB} ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}
	${RM} ${OBJ_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus: ${OBJ_BONUS}
	${LIB} ${NAME} ${OBJ_BONUS}

norm:
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all re clean fclean bonus