NAME		=	PmergeMe

CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g
RM			=	rm -rf

SRCS		=	main.cpp PmergeMe.cpp


all:		$(NAME)

$(NAME):
			$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
			$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re