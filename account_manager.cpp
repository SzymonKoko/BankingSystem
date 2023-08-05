/*
 *	account_manager.cpp
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#include "account_manager.h"

std::string firstName{"defaulf"};
std::string lastName{"default"};
std::string login{"default"};
std::string password{ "default" };

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

	
	const uint16_t maxChars = 16u;
	const uint16_t minChars = 3u;


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


	Account tmpAccount{ firstName, lastName, login, password };
	accounts.push_back(tmpAccount);


	WriteToFile(firstName, lastName, login, password);

}

void AccountManager::PrintAccounts()
{
	for (Account account : accounts)
	{
		account.SayHello();
	}
}

/*bool AccountManager::CheckLogin()
{
	if (account.GetLogin(login) == true)
	{
		if (account.GetPass(password) == true)
		{
			std::cout << "Login successful!\n";
			return true;
		}
	}
}
*/
void AccountManager::LoginToAccount()
{
	for (Account account : accounts)
	{
		

	} 
}

void AccountManager::WriteToFile(std::string fName = "Szymon", std::string lName = "Koko", std::string login = "admin", std::string pass = "admin")
{

	std::string fileName = fmt::format("{} {}.txt", fName, lName);
	std::ofstream file (fileName);
	file << fName << '\n' << lName << '\n' << login << '\n' << pass << '\n';
	file.close();
}

void AccountManager::GetLogin()
{
	bool loginStatus = false;
	std::string tmpFirstName{"default"};
	std::string tmpLastName{"default"};
	std::string tmpLogin{"default"};
	std::string tmpPass{"default"};
	std::cout << "Full name: ";
	std::cin >> tmpFirstName >> tmpLastName;
	ReadFromFile(tmpFirstName, tmpLastName);
	do
	{
		std::cout << "Login: ";
		std::cin >> tmpLogin;
		std::cout << "Password: ";
		std::cin >> tmpPass;

		if (tmpLogin == login && tmpPass == password)
		{
			Account tmpAccount{ firstName, lastName, login, password };
			accounts.push_back(tmpAccount);
			std::cout << "Login successful!\n";
			loginStatus = true;
		}
		else
		{
			std::cout << "Wrong login or password!\n";
		}
	} while (!loginStatus);
	
}

void AccountManager::ReadFromFile(std::string fName = "Szymon", std::string lName = "Koko")
{
	
	std::string fileName = fmt::format("{} {}.txt", fName, lName);
	std::ifstream file (fileName);
	if(file.is_open() == true)
	{ 
	file >> firstName >> lastName >> login >> password;
	}
	else
	{
		std::cout << "File doesn`t exist\n";
	}
	
	file.close();
}