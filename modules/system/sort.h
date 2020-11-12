/*******************************************************************************
* FILENAME :        modules/system/sort.h
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
 * Algorítmo de "ordenação bolha"
 * 
 * @param array           matriz selecionada.
 * @param arraySize       tamanho da matriz selecionada.
 * @return                não retorna valores.
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
 * Algorítmo de "ordenação rápida."
 * 
 * @param array           matriz selecionada.
 * @param lowerNumber     menor número dentro da matriz.
 * @param higherNumber    maior número dentro da matriz.
 * @return                não retorna valores.
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
 * Algorítmo de ordenação por inserção.
 * 
 * @param array           matriz selecionada.
 * @param arraySize       tamanho da matriz selecionada.
 * @return                não retorna valores.
 */
void InsertionSort(int array[], int arraySize){
    int sortingKey, j;

    for(int i = 1; i < arraySize; i++){
        sortingKey = array[i];

        for(j = i; j > 0 && sortingKey < array[j - 1]; j--)
            array[j] = array[j - 1];
        array[j] = sortingKey;
    }
}