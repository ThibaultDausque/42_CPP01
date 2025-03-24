# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thibault <thibault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 17:57:59 by thibault          #+#    #+#              #
#    Updated: 2025/03/24 18:03:13 by thibault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp
OBJ_DIR = objs
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

NAME = weapon

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re