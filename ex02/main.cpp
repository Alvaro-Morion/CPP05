/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:43:11 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/19 11:03:54 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main(void)
{
	ShrubberyCreationForm S("Home");
	RobotomyRequestForm R("Robot");
	PresidentialPardonForm P("Imprisioned guy");

	Bureaucrat B1("John", 140);
	Bureaucrat B2("Dan", 50);
	Bureaucrat B3("Zafod Beeblebrox", 1);

	std::cout << "---Shrubbery form---\n";
	std::cout << "---Not signed form--- \n";
	B3.executeForm(S);
	std::cout << "--- grade to low to exec---\n";
	B1.signForm(S);
	B1.executeForm(S);
	std::cout << "---Normal signature and execution---\n";
	B3.signForm(S);
	B3.executeForm(S);

	std::cout << "---Robotomy form---\n";
	std::cout << "--- Not signed---\n";
	B3.executeForm(R);
	std::cout<<"---Grade too low to exec---\n";
	B2.signForm(R);
	B1.executeForm(R);
	std::cout << "---Normal execution (4 times)---\n";
	B3.executeForm(R);
	B3.executeForm(R);
	B3.executeForm(R);
	B3.executeForm(R);

	std::cout << "---Presidential form---\n";
	std::cout << "---Not signed ---\n";
	B3.executeForm(P);
	std::cout << "--- Grade too low to exec---\n";
	B3.signForm(P);
	B2.executeForm(P);
	std::cout << "--- Normal execution---\n";
	B3.executeForm(P);
	return(0);
}
