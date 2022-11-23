SRC = ft_isalpha ft_isdigit ft_isalnum ft_isprint  ft_isascii\
		ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove \
		ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr \
		ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi \
		ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim \
		ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd \
		ft_strrchr ft_putendl_fd ft_putnbr_fd 		
OBJ =  ${SRC:=.o}
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

fclean: clean
	${RM} ${NAME}

re: fclean all
 
norm:
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all re clean fclean