/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:22:12 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/19 10:49:45 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

/* Constructors destructors */

RobotomyRequestForm::RobotomyRequestForm()
	: Form("Robotomy Request Form", 72, 45), target("Robotomy")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const target)
	: Form("Robotomy Request Form", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src)
	: Form(src.getName(), 72, 45), target(src.getTarget())
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

/* Operaators */

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &rhs)
{
	this->sign = rhs.getSigned();
	this->target = rhs.getTarget();
	return(*this);
}

/* Getters Setters */

std::string const RobotomyRequestForm::getTarget() const
{
	return(this->target);
}

/* Functions */

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch(std::exception & e)
	{
		throw e;
		return;
	}
	std::cout << "DRRRR DRRRRR DRRRRR" << std::endl;
	int n = rand()%2;
	if(n)
		std::cout << this->getTarget() << " Successfully robotomised\n";
	else
		std::cout << "Robotomy failed\n";
}
