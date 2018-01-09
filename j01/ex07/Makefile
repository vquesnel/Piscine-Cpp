# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 19:59:32 by vquesnel          #+#    #+#              #
#    Updated: 2018/01/09 20:00:13 by kwiessle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = replace
COMPILATOR = clang++
FLAGS = -Werror -Wall -Wextra
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILATOR) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(COMPILATOR) -o $@ -c $< $(FLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all
