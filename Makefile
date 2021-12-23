NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I./includes

HEADER = ./push_swap.h

ACTIONS =\
	   		actions/ft_push.c\
	   		actions/ft_reverse.c\
	   		actions/ft_rotate.c\
	   		actions/ft_swap.c\

ADD =\
		add/ft_atoi.c\
		add/ft_isdigit.c\
		add/ft_median.c\
		add/ft_direction.c\

LST_FUNC =\
			lst_func/ft_lstnew.c\
			lst_func/ft_lstlast.c\
			lst_func/ft_lstsize.c\
			lst_func/ft_lstdelone.c\
			lst_func/ft_lstclear.c\
			lst_func/ft_lstadd_back.c\
			lst_func/ft_lstadd_front.c\

CHECK =\
		check/ft_check_error.c\

SRCS =\
	   	ft_init.c\
		ft_solver.c\
		main.c\
		${ACTIONS}\
		${ADD}\
		${LST_FUNC}\
		${CHECK}\

OBJS = ${SRCS:.c=.o}

all :	${NAME}

%.o :	%.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} :	${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean :
	/bin/rm -f ${OBJS}

fclean :	clean
	/bin/rm -f ${NAME}

re :	fclean all

.PHONY : all clean fclean re
