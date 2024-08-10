NAME		=	Harl

CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

SRCS		=	Harl.cpp main.cpp

all:		$(NAME)

$(NAME):
			$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
			$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re