# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 21:53:03 by jmin-kwa          #+#    #+#              #
#    Updated: 2023/07/21 22:49:49 by jmin-kwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all : ${NAME} 

${NAME} : ${SRC}
	cc -Wall -Wextra -Werror -o ${NAME} ${SRC}

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re: fclean all ${NAME}