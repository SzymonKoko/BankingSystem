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

	Account(std::string fName = "Szymon", std::string lName = "Koko", std::string login = "admin", std::string pass = "admin")
	  : m_firstName{fName}, 
		m_lastName{lName},
		m_login{login},
		m_password{pass}
	{
	
	}
	void SayHello();
private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_login;
	std::string m_password;
};

#endif // !ACCOUNT_H_
