# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/19 10:59:54 by amorion-          #+#    #+#              #
#    Updated: 2022/06/19 11:48:00 by amorion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Bureaucrat.cpp				\
	   Form.cpp						\
	   ShrubberyCreationForm.cpp	\
	   RobotomyRequestForm.cpp 		\
	   PresidentialPardonForm.cpp	\
	   Intern.cpp					\
	   main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = clang++

FLAGS = -std=c++98 -Wall -Werror -Wextra -g

NAME = a.out

all: $(NAME)

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Binary generated"

clean: 
	@rm -rf $(OBJS)
	@echo "Object files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "Binary file deleted"

re: fclean all

.PHONY: re fclean clean all
