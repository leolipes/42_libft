# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/30 21:58:53 by leolipes          #+#    #+#              #
#    Updated: 2021/08/09 12:31:58 by leolipes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCR	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_strjoin.c 

OBJS	= ${SRCR:.c=.o}

NAME	= libft.a

CC		= clang
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
