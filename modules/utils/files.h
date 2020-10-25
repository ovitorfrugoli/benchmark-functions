/*******************************************************************************
* FILENAME :        modules/utils/files.h
*
* DESCRIPTION :
*       Functions that work with files.
*
* NOTES :
*       -
*
*
*/

/**
 * Fecha um determinado arquivo.
 * 
 * @param archive        arquivo determinado.
 * @return               não retorna valores.
 */
void CloseFile(FILE *archive)
{
	fclose(archive);
}

/**
 * Grava o teste de performance em um determinado arquivo.
 * 
 * @param usedFunction        função utilizada.
 * @param content             valor do teste de performance.
 * @return                    não retorna valores.
 */
void BenchmarkLog(char usedFunction[], double content, int arraySize)
{
	FILE *archive;
	struct tm *locTime;
	time_t seconds;

	time(&seconds);

	locTime = localtime(&seconds);


	archive = fopen(benchmarkDirectory, "a");

	fprintf(archive, "* %d/%d/%d ~ %dhr%dmin%dseg\n", locTime->tm_mday, locTime->tm_mon + 1, locTime->tm_year + 1900, locTime->tm_hour, locTime->tm_min, locTime->tm_sec);
	fprintf(archive, "* usedFunction: %s\n", usedFunction);
	fprintf(archive, "* arraySize: %d\n", arraySize);
	fprintf(archive, "* timeElapsed: %f\n\n", content);

	CloseFile(archive);
}

/**
 * Grava a matriz após a ordenação dos valores da mesma.
 * 
 * @param array               matriz a ser gravada.
 * @param arrayType           estilo da matriz.
 * @param arraySize           tamanho da matriz.
 * @return                    não retorna valores.
 */
void SaveSortedFile(int array[], int arrayType, int arraySize)
{
	struct tm *locTime;
	time_t seconds;

	time(&seconds);

	locTime = localtime(&seconds);

	switch(choosedMethod)
	{
		case 1:
		{
			FILE *archive;

			archive = fopen(bubbleDirectory, "a");

			fprintf(archive, "* %d/%d/%d ~ %dhr%dmin%dseg\n", locTime->tm_mday, locTime->tm_mon + 1, locTime->tm_year + 1900, locTime->tm_hour, locTime->tm_min, locTime->tm_sec);
			fprintf(archive, "* arraySize: %d\n", arraySize);
			fprintf(archive, "*\n");
			for(int i = 0; i < arraySize; i++)
				fprintf(archive, "%5d", array[i]);
			fprintf(archive, "\n\n");

			CloseFile(archive);
			break;			
		}
		case 2:
		{
			FILE *archive;

			archive = fopen(quickDirectory, "a");

			fprintf(archive, "* %d/%d/%d ~ %dhr%dmin%dseg\n", locTime->tm_mday, locTime->tm_mon + 1, locTime->tm_year + 1900, locTime->tm_hour, locTime->tm_min, locTime->tm_sec);
			fprintf(archive, "* arraySize: %d\n", arraySize);
			fprintf(archive, "*\n");
			for(int i = 0; i < arraySize; i++)
				fprintf(archive, "%5d", array[i]);
			fprintf(archive, "\n\n");

			CloseFile(archive);
			break;					
		}
		case 3:
		{
			FILE *archive;

			archive = fopen(insertionDirectory, "a");

			fprintf(archive, "* %d/%d/%d ~ %dhr%dmin%dseg\n", locTime->tm_mday, locTime->tm_mon + 1, locTime->tm_year + 1900, locTime->tm_hour, locTime->tm_min, locTime->tm_sec);
			fprintf(archive, "* arraySize: %d\n", arraySize);
			fprintf(archive, "*\n");
			for(int i = 0; i < arraySize; i++)
				fprintf(archive, "%5d", array[i]);
			fprintf(archive, "\n\n");

			CloseFile(archive);
			break;				
		}
	}
}