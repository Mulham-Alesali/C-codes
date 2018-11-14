/* 
Created By: Mulham Alesali
datei: main.c
Datum: 13.11.2018
*/
#include <stdio.h>
#include "header.h"

int main(int argc, char * argv[])
{
	//declaring the Complex number.
	double x1 = 1, y1 = 2;
	double x2 = -1, y2 = -3;
	double x, y;
	
	//print the two complex number.
	printf("z1 = %f + %fi\n", x1, y1);
	printf("z2 = %f + %fi\n", x2, y2);
	int result = komplex(x1, y1, x2, y2, &x, &y, '+');
	if (result == 1)
		printf("z1 + z2 = %f + %fi\n", x, y);
	else
		printf("not a correct operator\n");

	result = komplex(x1, y1, x2, y2, &x, &y, '*');
	if(result == 2)
		printf("z1 * z2 = %f + %fi\n", x, y);
	else 
		printf("not a correct operator\n");

	printf("\n\n");
	//new values
	x2 = -1; y2 = -3;
	//print the two complex number.
	printf("z1 = %f + %fi\n", x1, y1);
	printf("z2 = %f + %fi\n", x2, y2);
	result = komplex(x1, y1, x2, y2, &x, &y, '+');
	if (result == 1)
		printf("z1 + z2 = %f + %fi\n", x, y);
	else
		printf("not a correct operator\n");

	result = komplex(x1, y1, x2, y2, &x, &y, '*');
	if (result == 2)
		printf("z1 * z2 = %f + %fi\n", x, y);
	else
		printf("not a correct operator\n");


	getchar();
}


/*
double x1 = 2, y1 = 2, x2 = -1, y2 = 1;
double rx , ry;
double ergebnis;
summe(x1, y1, x2, y2, '*', &rx, &ry);
