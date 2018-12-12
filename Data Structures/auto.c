/*
auto.c
Name : Mulham Alesali
Datum : 12.12.2018
*/
#include "auto.h"
#include <stdio.h>


void ausgeben(AUTO * a) {
	//write it on the screen
	printf("\n%s, %s, %d, %d", a->Hersteller, a->Typ, a->Baujahr, a->AX);
}
//init a car
void init(AUTO * a, char h[], char t[], unsigned int bj, unsigned int ax) {
	a->Hersteller = h;
	a->Typ = t;
	a->Baujahr = bj;
	a->AX = ax;
}
