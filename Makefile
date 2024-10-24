CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_strlcpy.c ft_strlen.c ft_toupper.c ft_tolower.c \
		ft_bzero.c ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
		ft_strlcat.c ft_strncmp.c ft_strchr.c
OBJ = ${SRC:.c=.o}
NAME = libft.a
HEADER = libft.h

all: ${NAME}

${NAME}: ${OBJ}
	ar rc $(NAME) ${OBJ}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
