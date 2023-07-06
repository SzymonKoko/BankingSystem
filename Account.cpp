/*
 *	Account.cpp
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#include "Account.h"

void Account::SayHello() 
{
	std::cout << "My name is " << m_firstName << " " << m_lastName << std::endl;
	std::cout << "My login is: " << m_login << " and my password is:  " << m_password << std::endl;
}
