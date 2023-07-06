/*
 *	account_manager.cpp
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#include "account_manager.h"


static bool checkInput(std::string input, uint16_t minInput, uint16_t maxInput)
{
	if (input.length() > maxInput || input.length() < minInput)
	{
		std::cout << "This is too short or too long (3-16 characters)\n";
		return false;
	}
	else
	{
		return true;
	}
}

void AccountManager::RegisterAccount()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int lyear = 1900 + ltm->tm_year;

	std::string firstName{"defaulf"};
	std::string lastName{"default"};
	const uint16_t maxChars = 16u;
	const uint16_t minChars = 3u;
	std::string login{"default"};
	std::string password{ "default" };

	std::cout << "Your full name please: ";
	std::cin >> firstName >> lastName;

	do {
		std::cout << "Set your login (3-16 characters): ";
		std::cin >> login;	
	} while (checkInput(login, minChars, maxChars) == false);

	do {
		std::cout << "Set your password (3-16 characters): ";
		std::cin >> password;
	} while (checkInput(password, minChars, maxChars) == false);


	std::cout << std::endl << login;
	Account tmpAccount{ firstName, lastName, login, password };
	accounts.push_back(tmpAccount);

	

}

void AccountManager::PrintAccounts()
{
	for (Account account : accounts)
	{
		account.SayHello();
	}
}

