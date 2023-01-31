NAME		= convert
SRCS		= $(shell find . -name "*.cpp")
OBJS		= ${SRCS:.cpp=.o}

CC		= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g
RM		= rm -rf

.cpp.o:	
		@${CC} -c $< -o ${<:.cpp=.o}

all:		$(NAME)

$(NAME):	${OBJS}
		@echo "Assembling $@ ..."
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:	
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re test
