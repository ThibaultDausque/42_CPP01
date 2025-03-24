# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thibault <thibault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 17:45:30 by thibault          #+#    #+#              #
#    Updated: 2025/03/24 17:50:56 by thibault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
SRC = main.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
OBJS_DIR = objs
OBJS = $(SRC:%.cpp=$(OBJS_DIR)/%.o)

NAME = main

all: $(NAME)

$(NAME):$(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

