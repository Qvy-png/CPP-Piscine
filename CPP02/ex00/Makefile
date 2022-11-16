# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 18:13:13 by rdel-agu          #+#    #+#              #
#    Updated: 2022/11/13 11:37:33 by rdel-agu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CXX = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm

OBJ = $(SRC:.cpp=.o)    

SRC =	main.cpp\
		Fixed.cpp

INCL =	Harl.hpp\
		Fixed.hpp\
		color.hpp
		
all: $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS)  -I/usr/include -I INCL -c $< -o $@
		
$(NAME):  $(OBJ)
	@echo " \033[0;31mCompiling $(NAME)...\033[0m"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo " \033[0;32mSuccess\033[0m"
	
clean:
	@$(RM) -f $(OBJ) 
	@echo " \033[0;32mCleaning done!\033[0m"
	
fclean: clean
	@$(RM) -f $(NAME)

re: fclean all
	
.PHONY: clean fclean
