/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:20:59 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/19 10:40:48 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP 
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <fstream>
class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm &src);

		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm &rhs);

		std::string const getTarget() const;

		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};
#endif
