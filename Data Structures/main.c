/*
	main.c
	Name : Mulham Alesali
	Datum : 12.12.2018
	*/


#include <stdio.h>
#include "auto.h"

int main(int argv, char *arv[])
{
	//create 3 cars
	AUTO c1,c2,c3;
	init(&c1, "VW", "Golf", 2012, 2);
	init(&c1, "opel", "manta", 1970, 2);
	init(&c1, "Trabant", "601", 1964, 2);
	
	//output on the screen
	ausgeben(&c1);
	ausgeben(&c1);
	ausgeben(&c1);
	
	

	getchar();
}
