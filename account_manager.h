/*
 *	account_manager.h
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */
#ifndef ACCOUNT_MANAGER_H_
#define ACCOUNT_MANAGER_H_


#include "Account.h"
#include <iostream>
#include <string>
#include <stdint.h>
#include <vector>
#include <ctime>
#include <vector>
#include <fstream>
#include <format>
#include <fmt/format.h>



class AccountManager 
{
public:

	AccountManager()
	{

	}

	//Variables

	uint16_t birthDay = 0;
	uint16_t birthMonth = 0;
	uint16_t birthYear = 0;

	std::string login;
	std::string password;

private:
	std::vector<Account> accounts;

public:

	//Methods

	void WriteToFile(std::string, std::string, std::string, std::string);
	void RegisterAccount();
	void PrintAccounts();
	void LoginToAccount();
	void GetLogin();
	void ReadFromFile(std::string, std::string);
	//bool CheckLogin();
	

private:

};



#endif // !ACCOUNT_MANAGER.H
