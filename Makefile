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
			  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			  ft_toupper.c ft_isupper.c ft_islower.c \
			  ft_tolower.c \
			  ft_memchr.c ft_memcmp.c ft_atoi.c ft_isspace.c \
			  ft_charjoin.c \
			  ft_nbrlen.c ft_itoa.c ft_setitoa.c ft_dtoa.c ft_setdtoa.c \
			  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_swap.c ft_sort.c \
			  ft_calloc.c ft_putnbr_base_fd.c ft_putlnbr_fd.c ft_realloc.c ft_is_charset.c \
			  ft_putnbr_unsigned_fd.c ft_putpointer_fd.c ft_count_words.c ft_putnbr_float_fd.c get_lines.c \
			  str${DIRSEP}ft_strlen.c str${DIRSEP}ft_strlcpy.c str${DIRSEP}ft_strlcat.c str${DIRSEP}ft_strchr.c \
			  str${DIRSEP}ft_strrchr.c str${DIRSEP}ft_strcmp.c str${DIRSEP}ft_strncmp.c str${DIRSEP}ft_strndup.c str${DIRSEP}string_lower.c \
			  str${DIRSEP}ft_strnstr.c str${DIRSEP}ft_strncpy.c str${DIRSEP}ft_substr.c str${DIRSEP}ft_strjoin.c str${DIRSEP}ft_strjoin_char.c \
			  str${DIRSEP}ft_strjoin_list.c str${DIRSEP}ft_strtrim.c str${DIRSEP}ft_str_count_char.c str${DIRSEP}ft_str_count_chars.c str${DIRSEP}ft_strmapi.c \
			  str${DIRSEP}ft_striteri.c str${DIRSEP}ft_putstr_fd.c str${DIRSEP}ft_strdup.c str${DIRSEP}ft_strreplace.c str${DIRSEP}ft_strsameedge.c \
			  str${DIRSEP}repeat_str.c str${DIRSEP}clear_string.c str${DIRSEP}strcpy_passing_char.c str${DIRSEP}ft_str_is_alnum.c\
			  split${DIRSEP}ft_split.c split${DIRSEP}ft_split_quote.c split${DIRSEP}ft_strsplit.c split${DIRSEP}string_processing.c \
			  lst${DIRSEP}ft_lstnew.c lst${DIRSEP}ft_lstadd_front.c \
			  lst${DIRSEP}ft_lstsize.c lst${DIRSEP}ft_lstlast.c lst${DIRSEP}ft_lstadd_back.c ft_trunc.c \
			  lst${DIRSEP}ft_lstdelone.c lst${DIRSEP}ft_lstclear.c lst${DIRSEP}ft_lstiter.c lst${DIRSEP}ft_lstmap.c lst${DIRSEP}ft_lstprint.c \
			  file${DIRSEP}get_next_line.c file${DIRSEP}copy_fd_contents.c file${DIRSEP}ft_list_dir.c \
			  ft_printf${DIRSEP}ft_printf.c \
			  utf8${DIRSEP}ft_utf8_split_chars.c utf8${DIRSEP}ft_utf8_tab_to_str.c utf8${DIRSEP}ft_utf8_isascii.c utf8${DIRSEP}ft_utf8_isfourbyte.c utf8${DIRSEP}ft_utf8_isthreebyte.c utf8${DIRSEP}ft_utf8_istwobyte.c \
			  table${DIRSEP}ft_tabdel_empty.c table${DIRSEP}ft_tabdup.c table${DIRSEP}ft_tablen.c table${DIRSEP}ft_tabnew.c table${DIRSEP}ft_tabjoin.c table${DIRSEP}ft_tabfree.c table${DIRSEP}ft_tabadd.c table${DIRSEP}ft_tabdel.c table${DIRSEP}ft_tabinsert.c table${DIRSEP}ft_tabprint.c \
			  table${DIRSEP}find_table_args.c

OBJ_PATH	= obj${DIRSEP}

SRC_PATH	= src${DIRSEP}

OBJ_NAME	= ${addprefix ${SRC_PATH}, ${SRCS:%.c=%.o}}

OBJS		= ${addprefix ${OBJ_PATH}, ${OBJ_NAME}}

CC			= gcc

HEAD		= include

CFLAGS		= -g -Wall -Wextra -Werror -I ${HEAD}

${OBJ_PATH}%.o: %.c
	@mkdir -p ${@D} 2> /dev/null || true
	@${CC} ${CFLAGS} -o $@ -c $<

${NAME}: ${OBJS}
	@ar cr ${NAME} ${OBJS}

all: ${NAME}

clean: 
	@${RM} -r ${OBJ_PATH} 2> /dev/null || true

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
