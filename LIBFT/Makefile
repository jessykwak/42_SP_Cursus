# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jessk <jessk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 22:24:08 by jmin-kwa          #+#    #+#              #
#    Updated: 2023/08/03 00:44:53 by jessk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

LIB_NAME = libft.h

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c 
	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

all : ${SRC} ${LIB_NAME}

${NAME} : ${OBJ_FILES}
	ar rcs ${LIB_NAME} ${OBJ_FILES}

clean:
	rm -f *.o

fclean:
	rm -f ${LIB_NAME}

re: fclean all ${LIB_NAME}