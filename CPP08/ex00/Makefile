NAME		= EasyFind
SRCS		= $(shell find . -name "*.cpp")
OBJS		= ${SRCS:.cpp=.o}

CC		= clang++
CFLAGS		= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

.cpp.o:		
		@echo "Assembling files ..."
		@${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:		$(NAME)

$(NAME):	${OBJS}
		@echo "Assembling $@ ..."
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
		@echo "Done !"

clean:	
		@echo "Cleaning files ..."
		@${RM} ${OBJS}
		@echo "Done !"

fclean:		clean
		@echo "Cleaning ${NAME} ..."
		@${RM} ${NAME}
		@echo "Done !"

re:		fclean all

.PHONY:		all clean fclean re test
