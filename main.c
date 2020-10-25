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

/* Core */
#include "modules/core/includes.h"
#include "modules/core/header.h"

/* Data */
#include "modules/data/defines.h"
#include "modules/data/variables.h"

/* System */
#include "modules/system/benchmark.h"
#include "modules/system/sort.h"

/* Utils */
#include "modules/utils/dependencies.h"
#include "modules/utils/files.h"

/* Visual */
#include "modules/visual/menu.h"

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

