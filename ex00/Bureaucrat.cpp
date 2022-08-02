/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:18:07 by amorion-          #+#    #+#             */
/*   Updated: 2022/08/02 16:37:12 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Constructor destructor */
Bureaucrat::Bureaucrat() : name("Unnamed"), grade(150) {};

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	try{
		if(grade > 150)
			throw GradeTooLowException();
		if(grade < 1)
			throw GradeTooHighException();
		else
			this->grade = grade;
	}
	catch(std::exception &exception)
	{
	};
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name)
{
	this->grade = src.grade;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

/* Operators */

Bureaucrat const &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->grade = rhs.grade;
	return(*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &Bur)
{
	o << Bur.getName() << ", Bureaucrat grade " << Bur.getGrade();
	return(o);
}

/* Getters and setters */

std::string const Bureaucrat::getName(void) const
{
	return(this->name);
}

int Bureaucrat::getGrade(void) const
{
	return(this->grade);
}

/* functons */

void	Bureaucrat::incrementGrade(void)
{
	int current = this->getGrade();
	try{	
		if(current <= 1)
			throw GradeTooHighException();
		else
			grade--;
	}
	catch (std::exception &exception){};
}

void	Bureaucrat::decrementGrade(void)
{
	int current = this->getGrade();
	try{
		if(current >= 150)
			throw GradeTooLowException();
		else
			grade++;
	}
	catch(std::exception &exception){};
}

/* Exceptions */

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Grade too high\n";
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Grade too low\n";
}
