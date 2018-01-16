# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/16 09:34:59 by vquesnel          #+#    #+#              #
#    Updated: 2018/01/16 17:21:40 by vquesnel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= real_type
LOGIN= vquesnel

SRCS= main.cpp

OBJS= $(SRCS:.cpp=.o)
FLAGS= -Wall -Wextra -Werror

$(NAME):	$(OBJS)
	@clang++ -o $(NAME) $(OBJS)
	@echo "\033[38;5;79m  [$(NAME)]	Compiled."
	@echo "\033[34m"
	@echo "\033[38;5;84m  MMMºººAMV '7MMºººYb.   '7MMºººMq. "
	@echo "  M'   AMV    MM    'Yb.   MM   'MM."
	@echo "\033[38;5;85m  '   AMV     MM     'Mb   MM   ,M9 "
	@echo "     AMV      MM      MM   MMmmdM9  "
	@echo "\033[38;5;86m    AMV   ,   MM     ,MP   MM"
	@echo "   AMV   ,M   MM    ,dP'   MM"
	@echo "\033[38;5;87m  AMVmmmmMM .JMMmmmdP'   .JMML. "
	@echo ""
	@echo "\033[38;5;7m [2018]                    [${LOGIN}]"
	@echo ""

$(OBJS): %.o: %.cpp
	@clang++ $(FLAGS) -c $< -o $@

all:	$(NAME)

clean:
	@rm -f $(OBJS)
	@echo "\033[38;5;174m  [$(NAME)]	Objects destroyed.\033[0m"

fclean:	clean
	@rm -f $(NAME)
	@echo "\033[38;5;174m  [$(NAME)]	Binary removed.\033[0m"

re:		fclean all

.PHONY: all clean fclean re
