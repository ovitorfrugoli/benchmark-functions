/*******************************************************************************
* FILENAME :        main.c
*
* DESCRIPTION :
*       Main module.
*
* NOTES :
*       -
*
*
*/

/*
*  Modules
 */
#include "modules/includes.h"
#include "modules/defines.h"
#include "modules/variables.h"
#include "modules/functions.h"
#include "modules/visual.h"
#include "modules/utils.h"
#include "modules/sort.h"

/*
*  Main Callback

 */
int main(int argc, char const *argv[])
{
	ShowBanner();
	ShowInfo();
	ShowMenu();

	system("Pause");
	return 0;
}

