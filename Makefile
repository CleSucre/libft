# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthomas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:21:01 by jthomas           #+#    #+#              #
#    Updated: 2022/12/07 17:06:32 by jthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifeq ($(OS), Windows_NT)
	DIRSEP	= \\
	CP		= copy
	RM		= del -f
else
	DIRSEP	= /
	CP		= cp
	RM		= rm -f
endif

NAME		= libft.a

SRCS		= src${DIRSEP}ft_isalpha.c src${DIRSEP}ft_isdigit.c src${DIRSEP}ft_isalnum.c src${DIRSEP}ft_isascii.c src${DIRSEP}ft_isprint.c \
			  src${DIRSEP}ft_strlen.c src${DIRSEP}ft_memset.c src${DIRSEP}ft_bzero.c src${DIRSEP}ft_memcpy.c src${DIRSEP}ft_memmove.c \
			  src${DIRSEP}ft_strlcpy.c src${DIRSEP}ft_strlcat.c src${DIRSEP}ft_toupper.c src${DIRSEP}ft_isupper.c src${DIRSEP}ft_islower.c \
			  src${DIRSEP}ft_tolower.c src${DIRSEP}ft_strchr.c src${DIRSEP}ft_strrchr.c src${DIRSEP}ft_strcmp.c src${DIRSEP}ft_strncmp.c \
			  src${DIRSEP}ft_memchr.c src${DIRSEP}ft_memcmp.c src${DIRSEP}ft_strnstr.c src${DIRSEP}ft_atoi.c src${DIRSEP}ft_isspace.c \
			  src${DIRSEP}ft_substr.c src${DIRSEP}ft_strjoin.c src${DIRSEP}ft_strtrim.c src${DIRSEP}ft_split.c src${DIRSEP}ft_str_count_char.c \
			  src${DIRSEP}ft_str_count_chars.c src${DIRSEP}ft_nbrlen.c src${DIRSEP}ft_itoa.c src${DIRSEP}ft_strmapi.c src${DIRSEP}ft_striteri.c \
			  src${DIRSEP}ft_putchar_fd.c src${DIRSEP}ft_putstr_fd.c src${DIRSEP}ft_putendl_fd.c src${DIRSEP}ft_putnbr_fd.c src${DIRSEP}ft_strdup.c \
			  src${DIRSEP}ft_calloc.c src${DIRSEP}ft_putnbr_base_fd.c src${DIRSEP}ft_putlnbr_fd.c src${DIRSEP}ft_lstnew.c src${DIRSEP}ft_lstadd_front.c \
			  src${DIRSEP}ft_lstsize.c src${DIRSEP}ft_lstlast.c src${DIRSEP}ft_lstadd_back.c src${DIRSEP}ft_lstdelone.c src${DIRSEP}ft_lstclear.c \
			  src${DIRSEP}ft_lstiter.c src${DIRSEP}ft_lstmap.c

OBJS		= ${SRCS:.c=.o}

CC			= gcc

HEAD		= includes

CFLAGS		= -Wall -Wextra -Werror -I ${HEAD}

LIBFT 		= ar crs ${NAME} ${OBJS}

${NAME}: ${OBJS}
	${LIBFT}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
