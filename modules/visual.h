/*******************************************************************************
* FILENAME :        modules/visual.h
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
 * 
 * 
 * @return            não retorna valores.
 * @author            Vitor Santos.
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
 * 
 * 
 * @return            não retorna valores.
 * @author            Vitor Santos.
 */
void ShowInfo()
{
	printf("* \n");
	printf("* Seja bem-vindo ao programa de analise de performance.\n");
	printf("* Nao altere os nomes dos arquivos pois ocasionara um ma funcionamento do codigo.\n");	
	printf("* \n\n");
}

/**
 * 
 * 
 * @return            não retorna valores.
 * @author            Vitor Santos.
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
 * 
 * 
 * @param optionChoosed  Opção escolhida pelo usuário.
 * @return               retorna verdadeiro caso seja uma escolha válida.
 * @author               Vitor Santos
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
				//CreateArray('1');
				pageMenu = 2;
				ShowMenu();
				break;
			}
	
			case '2':
			{
				//CreateArray('2');
				choosedArray = 2;
				pageMenu = 2;
				ShowMenu();

				break;
			}
	
			case '3':
			{
				//CreateArray('3');
				choosedArray = 3;
				pageMenu = 2;
				ShowMenu();

				break;
			}
	
			default:
			{
				printf("Opcao invalida, arquivo padrao escolhido.\n");
				//CreateArray('4');
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