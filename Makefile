# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 10:32:16 by doduwole          #+#    #+#              #
#    Updated: 2023/01/26 14:28:11 by doduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

SRCS			=	ft_printf.c conversions/char.c conversions/str.c 		\
					conversions/int.c utils/ft_putchar.c utils/ft_itoa.c	\
					utils/ft_strlen.c utils/ft_bzero.c utils/ft_calloc.c	\
					

OBJS			=	${SRCS:.c=.o}

CC				=	gcc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror

all:			${NAME}

${NAME}:		${OBJS}
				ar rcs ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re