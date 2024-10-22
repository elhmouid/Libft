CC = cc
CFLAGS = #-Wall -Wextra -Werror
SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_strlcpy.c ft_strlen.c
OBJ = ${SRC:.c=.o}
NAME = libft.a
HEADER = libft.h

all: ${NAME}

${NAME}: ${OBJ}
	ar rc $(NAME) ${OBJ}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
