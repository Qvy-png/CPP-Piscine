# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 16:23:34 by rdel-agu          #+#    #+#              #
#    Updated: 2022/11/07 15:07:14 by rdel-agu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ViolenceInutile

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm

OBJ = $(SRC:.cpp=.o)    

SRC =	main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp
		
INCL =	HumanA.hpp\
		HumanB.hpp\
		Weapon.hpp\
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