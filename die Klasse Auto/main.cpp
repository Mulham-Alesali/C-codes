/*
Mulham Alesali
19.12.2018
main.cpp
*/

#include <iostream>
#include "a.h"
#include <string>

int main(int argc, char * argv[])
{
	//test the class


	Studiengang* sg1 = new Studiengang("Informatik", 7);
	cout << *sg1 << endl;

	Studiengang sg2;
	cin >> sg2;
	cout << sg2 << endl;
	
	Studiengang sg3(sg2);
	cout << sg3 << endl;


	sg2.setBezeichnung("Wirtschaft");
	sg2.setSemester(8);
	cout << sg2 << endl;
	

	string s;
	cin >> s;
	return 0;
}
