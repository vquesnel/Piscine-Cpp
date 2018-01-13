# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseinic <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 13:27:27 by mseinic           #+#    #+#              #
#    Updated: 2018/01/13 13:46:14 by mseinic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++

FLAGS = -Wall -Wextra #-Werror

NAME = a.out

SRC = main.cpp Window.cpp GameWin.cpp InfoWin.cpp Screen.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ) -lncurses

%.o: %.cpp
	$(COMPILER) $(FLAGS) -o $@ -c $< 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
