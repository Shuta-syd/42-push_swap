# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 17:46:58 by shogura           #+#    #+#              #
#    Updated: 2022/06/04 16:04:27 by shogura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAG = -g -Wall -Wextra -Werror

LIBFT = src/libft/libft.a

INC = inc/

SRC_FILES = push_swap.c scan_args.c sort_stack.c error_handler.c utils.c selection_sort.c radix_sort.c split_args.c
SORT_FILES = push.c rotate.c reverse_rotate.c swap.c
LIST_FILES = lstadd_back.c lstadd_front.c lstdel.c\
			 lstfirst.c lstlast.c lstnew.c lstsize.c

SORT_OPE = ${addprefix sort_ope/, ${SORT_FILES}}
LIST_OPE = ${addprefix list_ope/, ${LIST_FILES}}
SRC = ${addprefix src/, ${SRC_FILES} ${SORT_OPE} ${LIST_OPE}}

OBJS = ${SRC:.c=.o}

NR = norminette -R CheckForbiddenSourceHeader

all: ${NAME}

${NAME}:${SRC} ${LIBFT}
	${CC} ${CFLAG} -I${INC} -o $@ ${SRC} ${LIBFT}

${LIBFT}:
	@make -C src/libft

clean:
	${RM} ${OBJS}
	@make fclean -C src/libft

fclean: clean
	${RM} ${NAME}
	rm -rf push_swa.dSYM

re: fclean all
