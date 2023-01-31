NAME		= serial
SRCS		= $(shell find . -name "*.cpp")
OBJS		= ${SRCS:.cpp=.o}

CC		= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

.cpp.o:	
		@${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:		$(NAME)

$(NAME):	${OBJS}
		@echo "Assembling $@ ..."
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:		
		@echo "Cleaning..."
		@${RM} ${OBJS}

fclean:		clean
		@${RM} ${NAME}
		@echo "Full !"

re:		fclean all

.PHONY:		all clean fclean re test
