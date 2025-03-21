# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thibault <thibault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/21 16:17:11 by thibault          #+#    #+#              #
#    Updated: 2025/03/21 16:19:41 by thibault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
SRCS = newZombie.cpp \
	randomChump.cpp \
	Zombie.cpp \
	main.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
OBJS_DIR = objs
OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

NAME = zombie

all: $(NAME)

$(NAME): $(OBJS)
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