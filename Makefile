# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 13:32:19 by nhuang            #+#    #+#              #
#    Updated: 2023/05/29 16:53:14 by nhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc -Wall -Wextra -werror

SOURCE = 

OBJECTS = $(SOURCE:%.c=%.o)

.PHONY : clean fclean re

all : $(NAME)

$(NAME) : $(OBJECTS)
	@echo "compiling $@ from $^"
	@ar src $(NAME) $(OBJECTS)

%.o : %.c
	@$(CC) -c $< -o $@

clean :
	@rm -f *.o 

fclean : clean
	@rm -f $(NAME)

re :
	@make fclean && make clean && make all