/*******************************************************************************
* FILENAME :        modules/system/benchmark.h
*
* DESCRIPTION :
*       Benchmark functions.
*
* NOTES :
*       -
*
*
*/

/**
 * Efetua o teste de performance de determinada função.
 * 
 * @param array           matriz selecionada.
 * @param arraySize       tamanho da matriz selecionada.
 * @param choosedMethod   método de ordenação escolhido.
 * @return                não retorna valores.
 */
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

			SaveSortedFile(array, 1, arraySize);
			BenchmarkLog("BubbleSort", elapsedTime);
			break;
		}
		case 2:
		{
			startTimer = (float)clock() / CLOCKS_PER_SEC;
			QuickSort(array, 0, arraySize - 1);
			endTimer = (float)clock() / CLOCKS_PER_SEC;

			elapsedTime = endTimer - startTimer;

			SaveSortedFile(array, 2, arraySize);
			BenchmarkLog("QuickSort", elapsedTime);
			break;
		}
		case 3:
		{
			startTimer = (float)clock() / CLOCKS_PER_SEC;
			InsertionSort(array, arraySize);
			endTimer = (float)clock() / CLOCKS_PER_SEC;

			elapsedTime = endTimer - startTimer;

			SaveSortedFile(array, 3, arraySize);
			BenchmarkLog("InsertionSort", elapsedTime);
			break;
		}
	}
}