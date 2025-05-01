# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 20:44:19 by yabukirento       #+#    #+#              #
#    Updated: 2025/05/01 20:45:08 by yabukirento      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = UnnecessaryViolence
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I includes

SRCS = 	srcs/main.cpp \
		srcs/HumanA.cpp \
		srcs/HumanB.cpp \
		srcs/Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re