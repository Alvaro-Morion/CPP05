/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:00:24 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/19 10:20:37 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
/* Constructors destructors */

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("Shrubbery Creation Form", 145, 137), target("Shrubbery")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	Form("Shrumbery Creation Form", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src) :
	Form(src.getName(), 145, 137), target(src.getTarget())
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/* Operaators */

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	this->sign = rhs.getSigned();
	this->target = rhs.getTarget();
	return(*this);
}

/* Getters Setters */

std::string const ShrubberyCreationForm::getTarget() const
{
	return(this->target);
}

/* Functions */

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
	std::ofstream outfile(this->getTarget() + "_shrubbery", std::ofstream::out);
	outfile << "  ^  \n" << " /*\\ \n" << "/***\\ \n" << "  |   \n" << "  |  \n";
	outfile.close();
}
