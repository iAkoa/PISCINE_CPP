# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pat <pat@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 01:33:31 by pat               #+#    #+#              #
#    Updated: 2023/02/21 21:44:42 by pat              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	Nokia3310
SRCS		=	src/main.cpp	\
				src/contact.cpp	\
				src/phonebook.cpp
CC			=	clang++
INCLUDES	=	include
CPPFLAGS	=	-Wall -Werror -Wextra -I$(INCLUDES)
RM			=	rm -rf
OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):		$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(SRCS)

fclean:
			$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re