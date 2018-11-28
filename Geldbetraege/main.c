/*
main.c
Name :Mulham Alesali
Datum :28.11.2018
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "header.h"
#include <stdbool.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
	char str1[] = "21399,90Euro";
	char str2[] = "705,35$";
	int a = 0, b = 0, e = 0;


	s2n(str2, &a, &b, &e);
	if (e == 1)
		printf("v = %i n = %i $\n", a, b);
	else
		printf("v = %i n = %i Euro\n", a, b);

	s2n(str1, &a, &b, &e);

	if (e == 1)
		printf("v = %i n = %i $\n", a, b);
	else
		printf("v = %i n = %i Euro\n", a, b);



	getchar();

}
