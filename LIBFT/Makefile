# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jessk <jessk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 22:24:08 by jmin-kwa          #+#    #+#              #
#    Updated: 2023/08/03 01:25:32 by jessk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJ_FILES = ${SRC:.c=.o}

FLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJ_FILES}
	ar rcs ${OBJ_FILES}

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re: fclean all