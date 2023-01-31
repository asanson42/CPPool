NAME		= megaphone
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= megaphone.cpp

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^
clean:
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re test
