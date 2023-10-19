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

SRCS		= src${DIRSEP}ft_atoi.c src${DIRSEP}ft_bzero.c src${DIRSEP}ft_isalnum.c src${DIRSEP}ft_isalpha.c src${DIRSEP}ft_isascii.c src${DIRSEP}ft_isdigit.c src${DIRSEP}ft_islower.c src${DIRSEP}ft_isprint.c src${DIRSEP}ft_isspace.c src${DIRSEP}ft_isupper.c src${DIRSEP}ft_itoa.c src${DIRSEP}ft_nbrlen.c src${DIRSEP}ft_split.c src${DIRSEP}ft_tolower.c src${DIRSEP}ft_toupper.c \
              src${DIRSEP}string${DIRSEP}ft_str_count_char.c src${DIRSEP}string${DIRSEP}ft_str_count_chars.c src${DIRSEP}string${DIRSEP}ft_strchr.c src${DIRSEP}string${DIRSEP}ft_strcmp.c src${DIRSEP}string${DIRSEP}ft_strdup.c src${DIRSEP}string${DIRSEP}ft_striteri.c src${DIRSEP}string${DIRSEP}ft_strjoin.c src${DIRSEP}string${DIRSEP}ft_strlcat.c src${DIRSEP}string${DIRSEP}ft_strlcpy.c src${DIRSEP}string${DIRSEP}ft_strlen.c src${DIRSEP}string${DIRSEP}ft_strmapi.c src${DIRSEP}string${DIRSEP}ft_strncmp.c src${DIRSEP}string${DIRSEP}ft_strnstr.c src${DIRSEP}string${DIRSEP}ft_strrchr.c src${DIRSEP}string${DIRSEP}ft_strtrim.c src${DIRSEP}string${DIRSEP}ft_substr.c \
              src${DIRSEP}memory${DIRSEP}ft_calloc.c src${DIRSEP}memory${DIRSEP}ft_memchr.c src${DIRSEP}memory${DIRSEP}ft_memcmp.c src${DIRSEP}memory${DIRSEP}ft_memcpy.c src${DIRSEP}memory${DIRSEP}ft_memmove.c src${DIRSEP}memory${DIRSEP}ft_memset.c \
              src${DIRSEP}display${DIRSEP}ft_putchar_fd.c src${DIRSEP}display${DIRSEP}ft_putendl_fd.c src${DIRSEP}display${DIRSEP}ft_putlnbr_fd.c src${DIRSEP}display${DIRSEP}ft_putnbr_base_fd.c src${DIRSEP}display${DIRSEP}ft_putnbr_fd.c src${DIRSEP}display${DIRSEP}ft_putstr_fd.c \
              src${DIRSEP}chain${DIRSEP}ft_lstadd_back.c src${DIRSEP}chain${DIRSEP}ft_lstadd_front.c src${DIRSEP}chain${DIRSEP}ft_lstclear.c src${DIRSEP}chain${DIRSEP}ft_lstdelone.c src${DIRSEP}chain${DIRSEP}ft_lstiter.c src${DIRSEP}chain${DIRSEP}ft_lstlast.c src${DIRSEP}chain${DIRSEP}ft_lstmap.c src${DIRSEP}chain${DIRSEP}ft_lstnew.c src${DIRSEP}chain${DIRSEP}ft_lstsize.c \

SRCS_UT		= unitests\main.c  unitests\unitest.h \
			  unitests/tests/test_ft_atoi.c unitests/tests/test_ft_bzero.c unitests/tests/test_ft_isalnum.c unitests/tests/test_ft_isalpha.c unitests/tests/test_ft_isascii.c unitests/tests/test_ft_isdigit.c unitests/tests/test_ft_islower.c unitests/tests/test_ft_isprint.c unitests/tests/test_ft_isspace.c unitests/tests/test_ft_isupper.c unitests/tests/test_ft_itoa.c unitests/tests/test_ft_nbrlen.c unitests/tests/test_ft_split.c unitests/tests/test_ft_str_count_char.c unitests/tests/test_ft_str_count_chars.c unitests/tests/test_ft_strchr.c unitests/tests/test_ft_strcmp.c unitests/tests/test_ft_strdup.c unitests/tests/test_ft_striteri.c unitests/tests/test_ft_strjoin.c unitests/tests/test_ft_strlcat.c unitests/tests/test_ft_strlen.c unitests/tests/test_ft_tolower.c unitests/tests/test_ft_toupper.c

OBJS		= ${SRCS:.c=.o}

CC			= gcc

HEAD		= includes

CFLAGS		= -Wall -Wextra -Werror -I ${HEAD}

%.o : %.c
	${CC} ${CFLAGS} -o $@ -c $<

${NAME}: ${OBJS}
	ar crs ${NAME} ${OBJS}

all: ${NAME}

unitest: all
	${CC} ${SRCS_UT} -L . -lft -I includes -o unitest
	./unitest

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re unitest
