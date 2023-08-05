/*
 *	app.cpp
 *
 *	Created on: 05.07.2023
 *		Author: Szymon
 */

#include "app.h"

#include <iostream>
#include <ctime>
#include <Windows.h>

void LaunchApp()
{
	AccountManager manager;

	showGui();

	int guiChoice = 0;
	cout << "Choose the option: ";
	cin >> guiChoice;
	switch (guiChoice)
	{
	case 1:
		Sleep(500);
		system("cls");
		manager.RegisterAccount();
		break;
	case 2:
		Sleep(500);
		system("cls");
		manager.PrintAccounts();
		break;
	default:
		break;
	}
	
	
	//manager.RegisterAccount();
	//manager.PrintAccounts();
}
