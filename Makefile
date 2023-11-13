# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julthoma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 17:07:47 by julthoma          #+#    #+#              #
#    Updated: 2023/11/02 17:07:47 by julthoma         ###   ########.fr        #
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

SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_isupper.c ft_islower.c \
			  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c \
			  ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_isspace.c \
			  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_str_count_char.c \
			  ft_str_count_chars.c ft_nbrlen.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strdup.c \
			  ft_calloc.c ft_putnbr_base_fd.c ft_putlnbr_fd.c \
			  lst${DIRSEP}ft_lstnew.c lst${DIRSEP}ft_lstadd_front.c \
			  lst${DIRSEP}ft_lstsize.c lst${DIRSEP}ft_lstlast.c lst${DIRSEP}ft_lstadd_back.c \
			  lst${DIRSEP}ft_lstdelone.c lst${DIRSEP}ft_lstclear.c lst${DIRSEP}ft_lstiter.c lst${DIRSEP}ft_lstmap.c \
			  get_next_line${DIRSEP}get_next_line.c


OBJS		= ${addprefix src${DIRSEP}, ${SRCS:%.c=%.o}}

CC			= gcc

HEAD		= include

CFLAGS		= -Wall -Wextra -Werror -I ${HEAD}

%.o : %.c
	${CC} ${CFLAGS} -o $@ -c $<

${NAME}: ${OBJS}
	ar crs ${NAME} ${OBJS}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
