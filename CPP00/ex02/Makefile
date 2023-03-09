# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 01:33:31 by pat               #+#    #+#              #
#    Updated: 2023/03/09 14:13:13 by rmattheo         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	DreamJob

CC			=	c++

INCLUDES	=	include

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98 -I$(INCLUDES)

RM			=	rm -rf

SRCS		=	src/Account.cpp \
				src/test.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

LOGS		=	contrefacon.log 	\
				true_log 			\
				contrefacon_log

# This is a minimal set of ANSI/VT100 color codes
_END	=	$'\033[0m
_BOLD	=	$'\033[1m
_UNDER	=	$'\033[4m
_REV	=	$'\033[7m

# Colors
_GREY		=	$'\033[30m
_RED		=	$'\033[31m
_GREEN		=	$'\033[32m
_YELLOW		=	$'\033[33m
_BLUE		=	$'\033[34m
_PURPLE		=	$'\033[35m
_CYAN		=	$'\033[36m
_WHITE		=	$'\033[37m

# Inverted, i.e. colored backgrounds
_IGREY=$'\033[40m'
_IRED=$'\033[41m'
_IGREEN=$'\033[42m'
_IYELLOW=$'\033[43m'
_IBLUE=$'\033[44m'
_IPURPLE=$'\033[45m'
_ICYAN=$'\033[46m'
_IWHITE=$'\033[47m'

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
			@echo "$(_PURPLE)Created executable$(_END) \033[38;2;39;154;186m$(NAME)\033[0m"

%.o:%.cpp		 $(INCLUDES)/*
			@$(CC) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)
			@echo "$(_GREEN)Compiling$(_END) $<."

run : $(NAME)
		@./Dreamjob > contrefacon.log

diff:	run
		bash diff.sh
		$(RM) $(LOGS)

clean:
			@$(RM) $(OBJS)
			@echo "$(_RED)Removed object files.$(_END)" 

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(_RED)Removed executable.$(_END)"

re:			fclean all

.PHONY:		fclean, all, re, run , diff