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
		add/ft_split.c\
		add/ft_calloc.c\
		add/ft_bzero.c\
		add/ft_atoi.c\
		add/ft_isdigit.c\
		add/init_sort_tab.c\
		add/ft_direction.c\
		add/ft_can_push.c\
		add/piv_index.c\
		add/free.c\

LST_FUNC =\
			lst_func/ft_lstnew.c\
			lst_func/ft_lstlast.c\
			lst_func/ft_lstsize.c\
			lst_func/ft_lstdelone.c\
			lst_func/ft_lstclear.c\
			lst_func/ft_lstadd_back.c\
			lst_func/ft_lstadd_front.c\

CHECK =\
		check/check_error.c\
		check/check_sort.c\

SRCS =\
	   	stack_init.c\
		sort.c\
		sort_lst_a.c\
		solver.c\
		main.c\
		${ACTIONS}\
		${ADD}\
		${LST_FUNC}\
		${CHECK}\

OBJS = ${SRCS:.c=.o}

ARGS = `arg="$(filter-out $@,$(MAKECMDGOALS))" && echo $${arg:-${1}}`

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

leaks: $(NAME)
	leaks -atExit -- ./$(NAME) $(call ARGS,defaultstring)

.PHONY : all clean fclean re
