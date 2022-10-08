# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 18:59:54 by tfedoren          #+#    #+#              #
#    Updated: 2022/10/08 19:20:49 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC =	main.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf

all: 
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) 
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus