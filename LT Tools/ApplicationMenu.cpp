#include "stdafx.h"
#include "ApplicationMenu.h"


using namespace System;

/*
- Construtor da classe
- ApplicationMenu
*/
ApplicationMenu::ApplicationMenu()
{
	//int option;
}

/*
- Metodo showMenu()
- Chama e exibe no stdout o menu principal da aplicação
*/
void ApplicationMenu::showMenu()
{
	Console::WriteLine("Lucas Thomaz Tools (LT Tools) v1.0.8");
	Console::WriteLine("Diversas ferramentas para desenvolvimento \n \n");

	Console::WriteLine(" --- Menu Principal --- ");
	Console::WriteLine("1 - ###############");
	Console::WriteLine("2 - ###############");
	Console::WriteLine("3 - ###############");
	Console::WriteLine("4 - ###############");
	
	Console::WriteLine("\nDigite a opção desejada: ");
	// implementar leitura da opcao desejada aqui nesta linha

	switch (option)
	{

	case '1':
		Console::WriteLine("Opcao 1");
		break;
	case '2':
		Console::WriteLine("Opcao 2");
		break;
	case '3':
		Console::WriteLine("Opcao 3");
		break;

	default:
		Console::WriteLine("Houve um erro, tente novamente");
	    ApplicationMenu:showMenu();
		break;
	}
}


