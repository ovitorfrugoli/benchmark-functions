/*******************************************************************************
* FILENAME :        modules/utils/dependencies.h
*
* DESCRIPTION :
*       Util functions to the project.
*
* NOTES :
*       -
*
*
*/

/**
 * Altera a posição de determinados números dentro de uma determinada Matriz.
 * 
 * @param firstNumber    primeiro número retirado da matriz.
 * @param secondNumber   segundo número retirado da matriz
 * @return               não retorna valores.
 */
void ChangePosition(int *firstNumber, int *secondNumber)
{
	int aux;

	aux = *firstNumber;
	*firstNumber = *secondNumber;
	*secondNumber = aux;
}

/**
 * Organiza a matriz utilizando o último número da matriz como ponto central da mesma.
 * 
 * @param array          matriz a ser ordenada.
 * @param lowerNumber    menor número dentro da matriz não ordenada.
 * @param higherNumber   maior número dentro da matriz não ordenada
 * @return               retorna index + 1.
 */
int SplitArray(int array[], int lowerNumber,int higherNumber)
{
	int 
		arrayPivot = array[higherNumber],
		i = (lowerNumber - 1)
	;

	for(int j = lowerNumber; j <= higherNumber - 1; j++)
	{
		if(array[j] < arrayPivot)
		{
			i++;
			ChangePosition(&array[i], &array[j]);
		}
	}
	ChangePosition(&array[i + 1], &array[higherNumber]);

	return (i + 1);
}

/**
 * Lê um determinado arquivo e insere os números dentro de uma determinada matriz.
 * 
 * @param arrayType     estilo da matriz selecionada.
 * @return              não retorna valores.
 */
void CreateArray(int arrayType)
{
	switch(arrayType)
	{
		case 1:
		{
			int array[ARRAY_TYPE_ONE];
			FILE *archive;
			archive = fopen(firstDirectory, "r");
		
			for(int i = 0; i < ARRAY_TYPE_ONE; i++)
				fscanf(archive, "%d\n", &array[i]);
			
			CloseFile(archive);

			BenchmarkFunction(array, ARRAY_TYPE_ONE, choosedMethod);
			break;
		}
		case 2:
		{
			int array[ARRAY_TYPE_TWO];
			FILE *archive;
			archive = fopen(secondDirectory, "r");
		
			for(int i = 0; i < ARRAY_TYPE_TWO; i++)
				fscanf(archive, "%d\n", &array[i]);
		
			CloseFile(archive);

			BenchmarkFunction(array, ARRAY_TYPE_TWO, choosedMethod);
			break;			
		}
		case 3:
		{
			int array[ARRAY_TYPE_THREE];
			FILE *archive;
			archive = fopen(thirdDirectory, "r");
		
			for(int i = 0; i < ARRAY_TYPE_THREE; i++)
				fscanf(archive, "%d\n", &array[i]);
		
			CloseFile(archive);

			BenchmarkFunction(array, ARRAY_TYPE_THREE, choosedMethod);
			break;			
		}
		default:
		{
			int array[ARRAY_TYPE_DEFAULT];
			FILE *archive;
			archive = fopen(defaultDirectory, "r");
		
			for(int i = 0; i < ARRAY_TYPE_ONE; i++)
				fscanf(archive, "%d\n", &array[i]);
		
			CloseFile(archive);

			BenchmarkFunction(array, ARRAY_TYPE_DEFAULT, choosedMethod);
			break;
		}
	}
}

