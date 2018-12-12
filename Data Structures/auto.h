/*
auto.h
Name : Mulham Alesali
Datum : 12.12.2018
*/
#pragma once

//car struct
typedef struct AUTO {
	char* Hersteller;
	char* Typ;
	unsigned int  Baujahr;
	unsigned int  AX;
} AUTO;
//output method
void ausgeben(AUTO * a);
//consrutor
void init(AUTO * a, char h[],char t[],unsigned int bj, unsigned int ax);
