# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 19:59:32 by vquesnel          #+#    #+#              #
#    Updated: 2018/01/14 00:31:14 by vquesnel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_retro
COMPILATOR = clang++
FLAGS = -Werror -Wall -Wextra
NCURSES = -lncurses
SRC = main.cpp ABullet.cpp AEnv.cpp Enemy.cpp EnemyBullet.cpp Player.cpp \
PlayerBullet.cpp Window.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILATOR) $(FLAGS) $(NCURSES) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(COMPILATOR) -o $@ -c $< $(FLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all
