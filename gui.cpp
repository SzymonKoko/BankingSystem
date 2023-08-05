/*
 *	gui.cpp
 *
 *	Created on: 10.07.2023
 *		Author: Szymon
 */

#include "gui.h"

void showGui()
{
	fstream gui_file;
	gui_file.open("gui_start.txt", ios::in);
	if (gui_file.is_open())
	{
		string gui;
		while (getline(gui_file, gui))
		{
			cout << gui << endl;
		}
	}

}