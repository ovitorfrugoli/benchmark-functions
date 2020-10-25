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

	__int64 computerFrequency, startTimer, endTimer;

	double elapsedTime;

	switch(choosedMethod)
	{
		case 1:
		{
			QueryPerformanceFrequency((LARGE_INTEGER *)&computerFrequency);
			QueryPerformanceCounter((LARGE_INTEGER *)&startTimer);

			BubbleSort(array, arraySize);

			QueryPerformanceCounter((LARGE_INTEGER *)&endTimer);

			elapsedTime = ((double)endTimer-(double)startTimer) / (double)computerFrequency;

			SaveSortedFile(array, 1, arraySize);
			BenchmarkLog("BubbleSort", elapsedTime, arraySize);
			break;
		}
		case 2:
		{
			QueryPerformanceFrequency((LARGE_INTEGER *)&computerFrequency);
			QueryPerformanceCounter((LARGE_INTEGER *)&startTimer);

			QuickSort(array, 0, arraySize - 1);

			QueryPerformanceCounter((LARGE_INTEGER *)&endTimer);

			elapsedTime = ((double)endTimer-(double)startTimer) / (double)computerFrequency;

			SaveSortedFile(array, 2, arraySize);
			BenchmarkLog("QuickSort", elapsedTime, arraySize);
			break;
		}
		case 3:
		{
			QueryPerformanceFrequency((LARGE_INTEGER *)&computerFrequency);
			QueryPerformanceCounter((LARGE_INTEGER *)&startTimer);

			InsertionSort(array, arraySize);

			QueryPerformanceCounter((LARGE_INTEGER *)&endTimer);

			elapsedTime = ((double)endTimer-(double)startTimer) / (double)computerFrequency;

			SaveSortedFile(array, 3, arraySize);
			BenchmarkLog("InsertionSort", elapsedTime, arraySize);
			break;
		}
	}
}