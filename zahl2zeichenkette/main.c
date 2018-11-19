/*
main.c
Mulham Alesali, 15.11.2018
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include "header.h"

int main(int argc, char * argv[])
{
	
	char str[100];
	scanf("%s", str);

	printf("%i", zeichenkette2zahl(str));
	getch();


	return 0;
}
