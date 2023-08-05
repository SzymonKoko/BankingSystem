/*
 *	Account.cpp
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#include "Account.h"
#include "app.h"

void Account::SayHello() 
{
	std::cout << "My name is " << m_firstName << " " << m_lastName << std::endl;
	std::cout << "My login is: " << m_login << " and my password is:  " << m_password << std::endl;
}

std::string Account::ReturnFirstName()
{
	return m_firstName;
}

std::string Account::ReturnLastName()
{
	return m_lastName;
}
