NAME		= ZombieHorde
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= Zombie.cpp ZombieHorde.cpp main.cpp

CC		= clang++
CFLAGS		= -Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRCSDIR)/$(SRCS)
		@echo "Assembling $@"
		@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:		all clean fclean re test
