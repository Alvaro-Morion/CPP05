/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:34:03 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/19 09:44:44 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include<iostream>
# include "Form.hpp"

class	Form;
class	Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);

		~Bureaucrat();

		Bureaucrat const	&operator=(Bureaucrat const &rhs);

		std::string	const getName(void) const;
		int			getGrade(void) const;

		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &form);
		void		executeForm(Form const &form);

		class   GradeTooHighException : public std::exception{
    		public:
           		GradeTooHighException();
		};
		class   GradeTooLowException : public std::exception{
    		public:
				GradeTooLowException();
		};
					
	private:
		std::string const	name;
		int					grade;

};

std::ostream	&operator<<(std::ostream & o, Bureaucrat const &Bur);
#endif
