# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 22:24:08 by jmin-kwa          #+#    #+#              #
#    Updated: 2023/07/24 22:30:14 by jmin-kwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

all : ${SRC} 

${NAME} : ${SRC}
	ar rcs ${LIB_NAME} ${OBJ_FILES}

clean:
	rm -f *.o

fclean:
	rm -f ${LIB_NAME}

re: fclean all ${LIB_NAME}