NAME		= KAREN
SRCS		= $(shell find . -name "*.cpp")
OBJS		= ${SRCS:.cpp=.o}

CC		= clang++
CFLAGS		= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

.cpp.o:
		@${CC} -c $< -o ${<:.cpp=.o}
		
all:		$(NAME)

$(NAME):	${OBJS}
		@echo "Assembling $@"
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all re clean fclean
