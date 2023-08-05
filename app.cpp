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
	bool repeat = false;
	AccountManager manager;

		Sleep(1000);
		
		showStartGui();

		int guiChoice = 0;
		cout << "Choose the option: ";
		cin >> guiChoice;
		switch (guiChoice)
		{
		case 1:
			Sleep(500);
			system("cls");
			manager.RegisterAccount();
		case 2:
			Sleep(500);
			system("cls");
			manager.GetLogin();
			showAppGui();
			break;
		default:
			repeat = true;
			break;
		}
	
	
	//manager.RegisterAccount();
	//manager.PrintAccounts();
}
