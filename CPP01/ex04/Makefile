# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 01:33:31 by pat               #+#    #+#              #
#    Updated: 2023/03/12 09:40:10 by mycomputer       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Sed

CC			=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -rf

SRCS		=	main.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

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

%.o:%.cpp
			@$(CC) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)
			@echo "$(_GREEN)Compiling$(_END) $<."

clean:
			@$(RM) $(OBJS)
			@echo "$(_RED)Removed object files.$(_END)" 

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(_RED)Removed executable.$(_END)"

re:			fclean all

.PHONY:		fclean, all, re