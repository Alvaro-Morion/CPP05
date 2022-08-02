/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:43:11 by amorion-          #+#    #+#             */
/*   Updated: 2022/08/02 17:00:26 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
	Form F1("Too low", 180, 42);
	Form F2("Too high", 0, 42);
	Form F3("Very important form", 50, 42);
	Bureaucrat B1("John", 100);
	Bureaucrat B2("Dan", 40);

	std::cout << F3 << std::endl;
	B1.signForm(F3);
	std::cout << F3 << std::endl;
	B2.signForm(F3);
	std::cout << F3 << std::endl;
	return(0);
}
