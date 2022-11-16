# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthomas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:21:01 by jthomas           #+#    #+#              #
#    Updated: 2022/11/11 05:28:01 by jthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IS_WIN	:=

ifeq ($(OS),Windows_NT)
	IS_WIN = 1
else
	IS_WIN = 0
endif

NAME		= libft.a

SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_isupper.c ft_islower.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_isspace.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_str_count_char.c ft_str_count_chars.c ft_nbrlen.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strdup.c ft_calloc.c ft_putnbr_base_fd.c ft_putlnbr_fd.c

SRCS_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS		= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

CC			= gcc

ifeq (${IS_WIN}, 1)
	DIRSEP	= \\
	CP		= copy
	RM		= del
else
	DIRSEP	= /
	CP		= cp
	RM		= rm -f
endif

CFLAGS		= -Wall -Wextra -Werror -I.

LIBFT 		= ar crs ${NAME} ${OBJS}

LIBFT_BONUS	= ar crs ${NAME} ${OBJS} ${OBJS_BONUS}

${NAME}: ${OBJS}
	${LIBFT}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus: ${OBJS_BONUS}
	${LIBFT_BONUS}

.PHONY: all clean fclean re bonus
