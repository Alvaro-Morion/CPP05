/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:52:11 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/19 11:02:48 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>

/* Constructors destructors */

PresidentialPardonForm::PresidentialPardonForm()
	: Form("Presidential Pardon Form", 25, 1), target("Somebody")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const target)
	: Form("Presidential Pardon Form", 25, 1), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src)
	: Form(src.getName(), 25, 1), target(src.getTarget())
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

/* Operaators */

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &rhs)
{
	this->sign = rhs.getSigned();
	this->target = rhs.getTarget();
	return(*this);
}

/* Getters Setters */

std::string const PresidentialPardonForm::getTarget() const
{
	return(this->target);
}

/* Functions */

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
	std::cout << getTarget() << " has been pardoned by Zaford Bleeblebox\n";
}
