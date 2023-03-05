cmake_minimum_required(VERSION 3.24)
project(libft C)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES
        main.c
        src/ft_atoi.c
        src/ft_bzero.c
        src/memory/ft_calloc.c
        src/ft_isalnum.c
        src/ft_isalpha.c
        src/ft_isascii.c
        src/ft_isdigit.c
        src/ft_islower.c
        src/ft_isprint.c
        src/ft_isspace.c
        src/ft_isupper.c
        src/ft_itoa.c
        src/chain/ft_lstadd_back.c
        src/chain/ft_lstadd_front.c
        src/chain/ft_lstclear.c
        src/chain/ft_lstdelone.c
        src/chain/ft_lstiter.c
        src/chain/ft_lstlast.c
        src/chain/ft_lstmap.c
        src/chain/ft_lstnew.c
        src/chain/ft_lstsize.c
        src/memory/ft_memchr.c
        src/memory/ft_memcmp.c
        src/memory/ft_memcpy.c
        src/memory/ft_memmove.c
        src/memory/ft_memset.c
        src/ft_nbrlen.c
        src/display/ft_putchar_fd.c
        src/display/ft_putendl_fd.c
        src/display/ft_putlnbr_fd.c
        src/display/ft_putnbr_base_fd.c
        src/display/ft_putnbr_fd.c
        src/display/ft_putstr_fd.c
        src/ft_split.c
        src/string/ft_str_count_char.c
        src/string/ft_str_count_chars.c
        src/string/ft_strchr.c
        src/string/ft_strcmp.c
        src/string/ft_strdup.c
        src/string/ft_striteri.c
        src/string/ft_strjoin.c
        src/string/ft_strlcat.c
        src/string/ft_strlcpy.c
        src/string/ft_strlen.c
        src/string/ft_strmapi.c
        src/string/ft_strncmp.c
        src/string/ft_strnstr.c
        src/string/ft_strrchr.c
        src/string/ft_strtrim.c
        src/string/ft_substr.c
        src/ft_tolower.c
        src/ft_toupper.c
)

add_library(libft main.c)

add_executable(libft_executable ${SOURCE_FILES})
