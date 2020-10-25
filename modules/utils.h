/*******************************************************************************
* FILENAME :        modules/utils.h
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
 * Altera os números dentro de uma determinada Matriz.
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
 * 
 * 
 * @param array          matriz a ser ordenada.
 * @param lowerNumber    menor número dentro da matriz não ordenada.
 * @param higherNumber   maior número dentro da matriz não ordenada
 * @return               .
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
 * 
 * 
 * @param array          matriz a ser ordenada.
 * @param lowerNumber    menor número dentro da matriz não ordenada.
 * @param higherNumber   maior número dentro da matriz não ordenada.
 * @return               .
 */
void ReadArray(int array[], int arraySize)
{
	for(int i = 0; i < arraySize; i++)
		printf("%d\n", array[i]);
}

/**
 * Fecha o arquivo escolhido.
 * 
 * @param archive        arquivo escolhido.
 * @return               não retorna valores.
 * @author               Vitor Santos.
 */
void CloseFile(FILE *archive)
{
	fclose(archive);
}

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

void BenchmarkFunction(int array[], int arraySize, int choosedMethod)
{
	float 
		startTimer, 
		endTimer, 
		elapsedTime
	;

	switch(choosedMethod)
	{
		case 1:
		{
			startTimer = (float)clock() / CLOCKS_PER_SEC;
			BubbleSort(array, arraySize);
			endTimer = (float)clock() / CLOCKS_PER_SEC;

			elapsedTime = endTimer - startTimer;

			printf("[DEBUG] %f\n", elapsedTime);
			break;
		}
		case 2:
		{
			startTimer = (float)clock() / CLOCKS_PER_SEC;
			QuickSort(array, 0, arraySize - 1);
			endTimer = (float)clock() / CLOCKS_PER_SEC;

			elapsedTime = endTimer - startTimer;

			printf("[DEBUG] %f\n", elapsedTime);
			break;
		}
		case 3:
		{
			startTimer = (float)clock() / CLOCKS_PER_SEC;
			InsertionSort(array, arraySize);
			endTimer = (float)clock() / CLOCKS_PER_SEC;

			elapsedTime = endTimer - startTimer;

			printf("[DEBUG] %f\n", elapsedTime);
			break;
		}
	}
}