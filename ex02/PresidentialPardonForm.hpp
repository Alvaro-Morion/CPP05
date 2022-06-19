/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:50:31 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/19 10:51:47 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP 
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <fstream>
class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm &src);

		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm &rhs);

		std::string const getTarget() const;

		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};
#endif
