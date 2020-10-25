/*******************************************************************************
* FILENAME :        modules/sort.h
*
* DESCRIPTION :
*       Module that contains the sorting logic.
*
* NOTES :
*       -
*
*
*/

/**
 * Organiza a matriz em ordem crescente.
 * 
 * @return            não retorna valores.
 * @author            Vitor Santos.
 */
void BubbleSort(int array[], int arraySize)
{
	for(int i = 0; i < arraySize - 1; i++)
	{
		for(int j = 0; j < arraySize - i - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				ChangePosition(&array[j], &array[j + 1]);
			}
		}
	}
}

/**
 * Organiza a matriz em ordem crescente.
 * 
 * @return            não retorna valores.
 * @author            Vitor Santos.
 */
void QuickSort(int array[], int lowerNumber, int higherNumber)
{
	if(lowerNumber < higherNumber)
	{
		int pivotIndex = SplitArray(array, lowerNumber, higherNumber);

		QuickSort(array, lowerNumber, pivotIndex - 1);
		QuickSort(array, pivotIndex + 1, higherNumber);
	}
}

/**
 * Organiza a matriz em ordem crescente.
 * 
 * @return            não retorna valores.
 * @author            Vitor Santos.
 */
void InsertionSort(int array[], int arraySize)
{
	for(int i = 1; i < arraySize; i++)
	{
		int 
			j,
			sortingKey = array[i]
		;

		j = i - 1;

		while(j >= 0 && array[j] > sortingKey)
		{
			array[j + i] = array[j];
			j = j - 1;
		}
		array[j + 1] = sortingKey;
	}
}

