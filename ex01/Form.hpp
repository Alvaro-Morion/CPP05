/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:24:19 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/30 12:29:55 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		std::string const	name;
		bool				sign;
		int const			sgrade;
		int const			xgrade;
	public:
		Form();
		Form(std::string const name, int const sgrade, int const xgrade);
		Form(Form const &src);

		~Form();

		Form const &operator=(Form const &rhs);
		
		std::string getName() const;
		bool		getSigned() const;
		int			getSgrade() const;
		int			getXgrade() const;

		void beSigned(Bureaucrat &Bur);

		class   GradeTooHighException : public std::exception{
            public:
                GradeTooHighException();
        };
        class   GradeTooLowException : public std::exception{
            public:
                GradeTooLowException();
        };
};

std::ostream    &operator<<(std::ostream &o, Form const &form);
#endif
