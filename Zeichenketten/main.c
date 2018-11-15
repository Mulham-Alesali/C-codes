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
	char s1[100];
	char s2[100];

	printf("insert the first string:");
	scanf("%s", s1);
//	fgets(s1, 100, stdin);
	printf("insert the seconde string:");
	scanf("%s", s2);
//	fgets(s2, 100, stdin);
	int result = strcomp(s1, s2);

	printf("\n %i\n", result);
	if(result == 0)
		printf("string1 = string2");
	else if(result > 0)
		printf("string1 > string2");
	else
		printf("string2 > string1");


	getch();
	return 0;
}
