Name = push_swap.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I./includes

OBJS = ${SRCS:.c=.o}

HEADER = libft.h

SRCS = srcs/*.c

all :	${NAME}

%.o :	%.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} :	${OBJS}
	ar -cr ${NAME} ${OBJS}

clean :
	/bin/rm -f ${OBJS}

fclean :	clean
	/bin/rm -f ${NAME}

re :	fclean all

.PHONY : all clean fclean re
