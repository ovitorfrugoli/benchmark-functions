/*******************************************************************************
* FILENAME :        modules/functions.h
*
* DESCRIPTION :
*       Module that starts functions first.
*
* NOTES :
*       -
*
*
*/

/*
*  Visual module functions.
 */
void ShowBanner();
bool MenuFunctions(char optionChoosed);
bool ShowMenu();
void ShowInfo();

/*
*  Utils module functions.
 */
void ChangePlace(int *firstNumber, int *secondNumber);
void ReadArray(int array[], int arraySize);
void CreateArray(int arrayType);
void CloseFile(FILE *archive);
void BenchmarkFunction(int array[], int arraySize, int choosedMethod);

int SplitArray(int array[], int lowerNumber,int higherNumber);

/*
*  Sort module functions.
 */
void BubbleSort(int array[], int arraySize);
void QuickSort(int array[], int lowerNumber, int higherNumber);
void InsertionSort(int array[], int arraySize);
