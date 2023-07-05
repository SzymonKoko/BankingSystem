/*
 *	account_manager.h
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */
#ifndef ACCOUNT_MANAGER_H_
#define ACCOUNT_MANAGER_H_

#include <iostream>
#include <string>
#include <stdint.h>
#include <vector>
#include "Account.h"

class AccountManager 
{

	AccountManager() {};

public:

	//Variables

	std::string identificator;
	std::string firstName;
	std::string lastName;
	uint16_t birthDay = 0;
	uint16_t birthMonth = 0;
	uint16_t birthYear = 0;
	uint16_t customerID = 0;

private:

	std::string login;
	std::string password;

public:

	//Methods

	void RegisterAccount();

private:
};

#endif // !ACCOUNT_MANAGER.H
