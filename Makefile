NAME = libasm.a

EXEC = a.out

SRCS = 	ft_strlen.s		\
		ft_strcpy.s		\
		ft_strcmp.s		\
		ft_write.s		\
		ft_read.s		\
		ft_strdup.s		\

CC = gcc -Wall -Werror -Wextra
ASM = nasm -f elf64

OBJS = ${SRCS:.s=.o}

all: ${NAME} ${EXEC}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS} 

${EXEC}: ${NAME}
	${CC} main.c ${NAME} -o ${EXEC}

.s.o:
	${ASM} -o $@ $?

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)
	rm -rf $(EXEC)

re: fclean all
