# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 18:13:13 by rdel-agu          #+#    #+#              #
#    Updated: 2022/11/15 22:30:52 by rdel-agu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CXX = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm

OBJ = $(SRC:.cpp=.o)    

SRC =	main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp

INCL =	Animal.hpp\
		Cat.hpp\
		Dog.hpp\
		WrongCat.hpp\
		WrongAnimal.hpp\
		color.hpp
		
all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS)  -I/usr/include -I INCL -c $< -o $@
		
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
