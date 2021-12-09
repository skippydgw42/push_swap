Name = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I./includes

OBJS = ${SRCS:.c=.o}

HEADER = push_swap.h

SRCS = ft_atoi.c\
	   ft_isdigit.c\
	   ft_check_error.c\
	   ft_init.c\
	   ft_push.c\
	   ft_reverse.c\
	   ft_rotate.c\
	   ft_swap.c\

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
