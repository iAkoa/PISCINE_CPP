# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pat <pat@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 01:33:31 by pat               #+#    #+#              #
#    Updated: 2023/02/27 01:23:39 by pat              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	Dreamjob
SRCS		=	src/test.cpp	\
				src/Account.cpp

CC			=	clang++
INCLUDES	=	include
CPPFLAGS	=	-Wall -Werror -Wextra -I$(INCLUDES)
RM			=	rm -rf
OBJS		=	$(SRCS:.cpp=.o)
LOGS		=	contrefacon.log 	\
				true_log 			\
				contrefacon_log

all:		$(NAME)

$(NAME):		$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			$(RM) $(OBJS)
			$(RM) $(NAME)
			$(RM) $(LOGS)
			$(RM) diff


run : $(NAME)
		@./Dreamjob > contrefacon.log

diff:	run
		bash diff.sh
		$(RM) $(LOGS)


re:			fclean all

.PHONY:		fclean, all, re, diff