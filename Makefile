# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 16:26:30 by nlecouri          #+#    #+#              #
#    Updated: 2022/03/29 16:27:19 by nlecouri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC				= main.c carr_ligne.c db_carr.c nb_ligne.c size_ligne.c struct.c verif_map.c

SRCS			= ${addprefix ${PRE}, ${SRC}}

OBJS			= ${SRCS:.c=.o}

PRE				= ./srcs/

HEAD			= ./includes/

DICT			= ./dicts/

NAME			= bsq

RM				= rm -f

GCC				= gcc

CFLAGS			= -Wall -Wextra -Werror

all:			${NAME}

.c.o:
				${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:		${OBJS}
				${GCC} ${CFLAGS} -g -o ${NAME} ${OBJS}

clean:
				rm -f ${OBJS}

fclean:			clean
				rm -f ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
