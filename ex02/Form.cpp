/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:42:53 by amorion-          #+#    #+#             */
/*   Updated: 2022/08/02 17:08:42 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructor Destructor */
Form::Form() : name("Blank form"), sgrade(150), xgrade(150)
{
	sign = 0;
}

Form::Form(std::string name, int sgrade, int xgrade) : name(name), sgrade(sgrade),
	xgrade(xgrade)
{
	try
	{
		sign = 0;
		if(sgrade > 150 || xgrade  > 150)
			throw Form::GradeTooLowException();
		else if(sgrade < 1 || xgrade < 1)
			throw Form::GradeTooHighException();
	}
	catch(std::exception &exception){};
}

Form::Form(Form const &src) : name(src.getName()), sgrade(src.getSgrade()),
   xgrade(src.getXgrade())
{
	sign = src.getSigned();
}

Form::~Form()
{
	return;
}

/* Operators */

Form const		&Form::operator=(Form const &rhs)
{
	this->sign = rhs.getSigned();
	return(*this);
}

std::ostream    &operator<<(std::ostream &o, Form const &form)
{
    o << form.getName() << " : Signed: " << form.getSigned()
		<< " Sign grade: " << form.getSgrade() << " Execute grade: "
		<< form.getXgrade() << std::endl;
    return(o);
}

/* Getter Setters */

std::string	Form::getName() const
{
	return(this->name);
}

bool		Form::getSigned() const
{
	return(this->sign);
}

int			Form::getSgrade() const
{
	return(this->sgrade);
}

int			Form::getXgrade() const
{
	return(this->xgrade);
}

/* Functions */

void	Form::beSigned(Bureaucrat &Bur)
{
	if(Bur.getGrade() > sgrade)
			throw GradeTooLowException();
	else
	{
		std::cout << Bur.getName() << " signs " << getName() << std::endl;
		sign = 1;
	}
}

void Form::execute(Bureaucrat const &executor) const
{
	if(!sign)
		throw NotSignedException();
	else if (executor.getGrade() > this->xgrade)
	{
		throw GradeTooLowException();
	}
}

/* Exceptions */

Form::GradeTooHighException::GradeTooHighException()
{
    std::cout << "Grade too high\n";
}

Form::GradeTooLowException::GradeTooLowException()
{
    std::cout << "Grade too low\n";
}

Form::NotSignedException::NotSignedException()
{
	std::cout << "not  signed form\n";
}

