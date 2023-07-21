LIB_NAME = libft.a

SRC_DIR = ./srcs

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

HEADER_DIR = ./includes

OBJ_FILES = $(SRC:%.c=$(SRC_DIR)/%.o)

all : ${LIB_NAME} 

${LIB_NAME} : ${OBJ_FILES}
	ar rcs ${LIB_NAME} ${OBJ_FILES}

clean:
	rm -f *.o

fclean:
	rm -f ${LIB_NAME}

re: fclean all ${LIB_NAME}