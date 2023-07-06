/*
 *	Account.cpp
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#include "Account.h"
#include <vector>

void Account::SayHello() const
{
	std::cout << "My name is " << m_firstName << " " << m_lastName << std::endl;
}
