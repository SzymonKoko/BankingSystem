/*
 *	account_manager.cpp
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#include "account_manager.h"

#include <ctime>
#include <vector>

void AccountManager::RegisterAccount()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int lyear = 1900 + ltm->tm_year;

	std::string firstName{"defaulf"};
	std::string lastName{"default"};

	std::cout << "Your full name please: ";
	std::cin >> firstName >> lastName;
	/*std::cout << "Date of birth (DD MM YYYY): ";
	std::cin >> birthDay >> birthMonth >> birthYear;
	if (lyear-birthYear < 18)
	{
		std::cout << "You are to young!\n";
	}*/

	Account tmpAccount{ firstName, lastName };
	accounts.push_back(tmpAccount);
	

}

void AccountManager::PrintAccounts()
{
	for (Account account : accounts)
	{
		account.SayHello();
	}
}

