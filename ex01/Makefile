# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 15:12:48 by ryabuki           #+#    #+#              #
#    Updated: 2025/05/01 21:31:42 by yabukirento      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoarBrainz
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INCLUDES = -I includes

SRCS = srcs/Zombie.cpp \
		srcs/zombieHorde.cpp \
		srcs/main.cpp

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