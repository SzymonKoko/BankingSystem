/*
 *	Account.h
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include "account_manager.h"

class Account 
{
public:
	std::string u_firstName;
	std::string u_lastName;

	Account(std::string fName, std::string lName) 
	{
		u_firstName = fName;
		u_lastName = lName;
	}
};

#endif // !ACCOUNT_H_
