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

void Account::LoginToTheAccount()
{
	std::string tmpFirtsName{"default"};
	std::string tmpLastName{"default"};
	std::string tmpLogin{"default"};
	std::string tmpPass{"default"};

	std::cout << "Your full name: ";
	std::cin >> m_firstName >> m_lastName;
	std::fstream obj_file;
	obj_file.open(fmt::format("{} {}.txt", tmpFirtsName, tmpLastName), std::ios::in);
	
	obj_file >> m_firstName >> m_lastName >> m_login >> m_password;
	if (obj_file.is_open())
	{
		do
		{
			std::cout << "Login: ";
			std::cin >> tmpLogin;
			std::cout << "Password: ";
			std::cin >> tmpPass;
		} while (tmpLogin != m_login && tmpPass != m_password);

		std::cout << "Log in successfully!\n";
	}
	else
	{
		std::cout << "User not found\n";
	}
	obj_file.close();
}
