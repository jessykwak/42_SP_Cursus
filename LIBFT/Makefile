# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jessk <jessk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 22:24:08 by jmin-kwa          #+#    #+#              #
#    Updated: 2023/08/07 23:41:48 by jessk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_PATH = ./

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c

OBJ_FILES = $(addprefix $(SRC_PATH), ${SRC:.c=.o})

all: ${NAME}

${NAME}: ${OBJ_FILES}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar rc $(NAME) $@
	
clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re: fclean all