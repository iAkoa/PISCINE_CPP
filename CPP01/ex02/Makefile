# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 01:33:31 by pat               #+#    #+#              #
#    Updated: 2023/03/01 21:43:57 by mycomputer       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	BONJOUR_ICI_LE_CERVEAU
SRCS		=	main.cpp
				

CC			=	clang++
INCLUDES	=	include
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98 -I$(INCLUDES)
RM			=	rm -rf
OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)


$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re, clean, $(NAME)