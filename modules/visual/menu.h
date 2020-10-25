/*******************************************************************************
* FILENAME :        modules/visual/menu.h
*
* DESCRIPTION :
*       Module that contain all of the visual functions.
*
* NOTES :
*       -
*
*
*/

/**
 * Exibe o banner de ínicio do programa.
 * 
 * @return            não retorna valores.
 */
void ShowBanner()
{
	printf("* * * * * * * * * * * * * * * * * * *\n");
	printf("*                                   *\n");	
	printf("*              APS EC               *\n");
	printf("*                                   *\n");
	printf("* * * * * * * * * * * * * * * * * * *\n\n");
}

/**
 * Exibe informações essenciais do programa.
 * 
 * @return            não retorna valores.
 */
void ShowInfo()
{
	printf("* \n");
	printf("* Seja bem-vindo ao programa de analise de performance.\n");
	printf("* Nao altere os nomes dos arquivos pois ocasionara um ma funcionamento do codigo.\n");	
	printf("* \n\n");
}

/**
 * Exibe o menu de opções para o usuário.
 * 
 * @return            retorna a opção selecionada pelo usuário.
 */
bool ShowMenu()
{
	if(pageMenu == 1)
	{
		char optionChoosed;
	
		printf("* Menu de opcoes:\n");
		printf("* Selecione o arquivo a ser analisado.\n");
		printf("* 1. 1000.txt\n");
		printf("* 2. 5000.txt\n");
		printf("* 3. 10000.txt\n");
	
		fflush(stdin);
		fgets(&optionChoosed, 2, stdin);
	
		return MenuFunctions(optionChoosed);
	}
	else if(pageMenu == 2)
	{
		char optionChoosed;
	
		printf("* Menu de opcoes:\n");
		printf("* Selecione a funcao a ser analisada:\n");
		printf("* 1. BubbleSort\n");
		printf("* 2. QuickSort\n");
		printf("* 3. InsertionSort\n");
	
		fflush(stdin);
		fgets(&optionChoosed, 2, stdin);
	
		return MenuFunctions(optionChoosed);
	}
}

/**
 * Faz o processo de funcionamento do menu principal.
 * 
 * @param optionChoosed  Opção escolhida pelo usuário.
 * @return               retorna verdadeiro caso seja uma escolha válida.
 */
bool MenuFunctions(char optionChoosed)
{
	if(pageMenu == 1)
	{
		switch(optionChoosed)
		{
			case '1':
			{
				choosedArray = 1;
				pageMenu = 2;
				ShowMenu();
				break;
			}
	
			case '2':
			{
				choosedArray = 2;
				pageMenu = 2;
				ShowMenu();

				break;
			}
	
			case '3':
			{
				choosedArray = 3;
				pageMenu = 2;
				ShowMenu();

				break;
			}
	
			default:
			{
				printf("Opcao invalida, arquivo padrao escolhido.\n");
				choosedArray = 4;
				pageMenu = 2;
				ShowMenu();

				break;
			}
		}
	}
	else if(pageMenu == 2)
	{
		switch(optionChoosed)
		{
			case '1':
			{
				choosedMethod = 1;
				CreateArray(choosedArray);
				break;
			}
			case '2':
			{
				choosedMethod = 2;
				CreateArray(choosedArray);
				break;
			}
			case '3':
			{
				choosedMethod = 3;
				CreateArray(choosedArray);
				break;
			}
			default:
			{
				printf("Opcao invalida, arquivo padrao escolhido.\n");
				//CreateArray('4');
				choosedMethod = 4;
				CreateArray(choosedArray);
				break;
			}
		}
	}
	return true;
}