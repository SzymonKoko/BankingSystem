/*
 *	Account.h
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>

class Account
{
public:

	Account(std::string fName = "Szymon", std::string lName = "Koko")
		: m_firstName{fName}, m_lastName{lName}
	{
	
	}
	

	void SayHello() const;
private:
	std::string m_firstName;
	std::string m_lastName;
};

#endif // !ACCOUNT_H_
