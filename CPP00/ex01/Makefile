# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 15:54:33 by rdel-agu          #+#    #+#              #
#    Updated: 2022/10/11 15:52:05 by rdel-agu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm

OBJ = $(SRC:.cpp=.o)    

SRC =	main.cpp\
		setterGetter.cpp\
		constructorDestructor.cpp

INCL =	phonebook.hpp\
		color.hpp
		
all: $(NAME)

%.o: %.c 
	@$(CC) $(CFLAGS)  -I/usr/include -I INCL
		
$(NAME):  $(OBJ)
	@echo " \033[0;31mCompiling $(NAME)...\033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo " \033[0;32mSuccess\033[0m"
	
clean:
	@$(RM) -f $(OBJ) 
	@echo " \033[0;32mCleaning done!\033[0m"
	
fclean: clean
	@$(RM) -f $(NAME)

re: fclean all
	
.PHONY: clean fclean
