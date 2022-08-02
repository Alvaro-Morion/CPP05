/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:15:16 by amorion-          #+#    #+#             */
/*   Updated: 2022/08/02 17:19:04 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* Constructors and destructor */
Intern::Intern()
{}

Intern::Intern(Intern const &src)
{
	(void)src;
}

Intern::~Intern()
{}

/* Operators */

Intern const &Intern::operator=(Intern const &rhs)
{
	return(rhs);
}

/* Functions */

Form *Intern::makeForm(std::string const type, std::string const target)
{
	std::string types[3] = {"Shrubbery Creation", "Robotomy Request",
		"Presidential Pardon"};
	int i = 0;
	while(i < 3 && type.compare(types[i]))
		i++;
	switch(i)
	{
		case(0) :
			return(new ShrubberyCreationForm(target));
		case(1) :
			return(new RobotomyRequestForm(target));
		case(2) :
			return(new PresidentialPardonForm(target));
		default :
		{
			std::cout << "Unknown form type\n";
			return(0);
		}
	}
}
