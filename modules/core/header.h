/*******************************************************************************
* FILENAME :        modules/core/header.h
*
* DESCRIPTION :
*       Module that starts functions in the header of the project.
*
* NOTES :
*       -
*
*
*/

/*
*  System module functions.
 */

/* Benchmark */
void BenchmarkFunction(int array[], int arraySize, int choosedMethod);

/* Sort */
void BubbleSort(int array[], int arraySize);
void QuickSort(int array[], int lowerNumber, int higherNumber);
void InsertionSort(int array[], int arraySize);

/*
*  Utils module functions.
 */

/* Dependencies */
void ChangePosition(int *firstNumber, int *secondNumber);
void CreateArray(int arrayType);

int SplitArray(int array[], int lowerNumber,int higherNumber);

/* Files */
void CloseFile(FILE *archive);
void BenchmarkLog(char usedFunction[], double content, int arraySize);
void SaveSortedFile(int array[], int arrayType, int arraySize);

/*
*  Visual module functions.
 */

/* Menu */
void ShowBanner();
void ShowInfo();

bool ShowMenu();
bool MenuFunctions(char optionChoosed);