NAME = ft_display_file

SRC = main.c read_file.c

all : ${NAME} 

${NAME} : ${SRC}
	cc -Wall -Wextra -Werror -o ${NAME} ${SRC}

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re: fclean all ${NAME}