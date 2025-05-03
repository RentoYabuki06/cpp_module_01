# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 22:23:58 by yabukirento       #+#    #+#              #
#    Updated: 2025/05/03 21:53:40 by yabukirento      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl3
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INCLUDES = -I includes

SRCS =	srcs/main.cpp \
		srcs/Harl.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
