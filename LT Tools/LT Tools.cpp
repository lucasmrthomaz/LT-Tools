// LT Tools.cpp : main project file.

#include "stdafx.h"
#include "ApplicationMenu.h"

using namespace System;

int main(array<System::String ^> ^args)
{

	/*
	- Instâcia de ApplicationMenu
	*/
	ApplicationMenu ^AM = gcnew ApplicationMenu();
	
	//Chama menu principal
	AM->showMenu();
	
	// Wait for ENTER
	Console::ReadLine();

    return 0;
}
