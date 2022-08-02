/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:43:11 by amorion-          #+#    #+#             */
/*   Updated: 2022/08/02 17:23:51 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
void ft_leaks(void)
{
	system("leaks a.out");
}

int main(void)
{
	//atexit(ft_leaks);
	Bureaucrat B3("Zafod Beeblebrox", 1);
	Intern I;
	Form *F1 = I.makeForm("Shrubbery Creation", "home");
	Form *F2 = I.makeForm("Robotomy Request", "Robot");
	Form *F3 = I.makeForm("Presidential Pardon", "Imprisioned guy");
	Form *F4 = I.makeForm("Unknown", "whoever");

	std::cout << *F1 << std::endl;
	B3.signForm(*F1);
	B3.executeForm(*F1);
	std::cout << *F2 << std::endl;
	B3.signForm(*F2);
	B3.executeForm(*F2);
	std::cout << *F3 << std::endl;
	B3.signForm(*F3);
	B3.executeForm(*F3);
	if(F4)
	{	
		std::cout << *F4 << std::endl;
		B3.signForm(*F4);
		B3.executeForm(*F4);
	}
	else
		std::cout << "F4 does not exist" << std::endl;

	delete F1;
	delete F2;
	delete F3;
	delete F4;
	return(0);
}
