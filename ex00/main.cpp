/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:43:11 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/30 11:21:40 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main(void)
{
	std::cout << "\tEXCEPTIONS\t" << std::endl;
	{
		Bureaucrat B("Juán", 180);
		Bureaucrat B1("Juán", 0);
		Bureaucrat B2("Pepe", 1);
		Bureaucrat B3("Pepe", 150);
		Bureaucrat B4("Bueno", 45);
		B2.incrementGrade();
		B3.decrementGrade();
		std::cout << B4 << std::endl;
		B4.incrementGrade();
		std::cout << B4 << std::endl;
		B4.decrementGrade();
		std::cout << B4 << std::endl;
		B = B4;
		std::cout << B << std::endl;
		Bureaucrat B5(B);
		std::cout << B5 << std::endl;

	}
	return(0);
}
