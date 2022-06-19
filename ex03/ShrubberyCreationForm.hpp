/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:49:02 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/19 11:27:32 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>
class ShrubberyCreationForm : public Form{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm &src);

		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm &rhs);

		std::string const getTarget() const;

		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};
#endif
