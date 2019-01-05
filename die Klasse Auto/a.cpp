/*
Mulham Alesali
19.12.2018
a.cpp
*/

#include <string>
#include "a.h"

//overload the contructors
Studiengang::Studiengang(const string Bezeichnung, const int Semester){
	this->setBezeichnung(Bezeichnung);
	this->setSemester(Semester);
}

Studiengang::Studiengang(const Studiengang& sg) {

	*this = sg;
	
	//this->Bezeichnung = sg.Bezeichnung;
	//this->Semester = sg.Semester;
}

void Studiengang::setBezeichnung(string Bezeichnung) {
	//test a capital letter
	if (isupper(Bezeichnung.front())) {
		this->Bezeichnung = Bezeichnung;
	}
	else {
		cout << "\nBezeichnung muss mit einem gross Buchstaben beginnen.\n";
	}
}

void Studiengang::setSemester(int Semester) {
	//Semester between 6 and 8
	if (Semester >= 6 & Semester <= 8) {
		this->Semester = Semester;
	}
	else
	{
		cout << "\n Semester muss zwischen 6 und 8 sein.\n";
	}
}

// io Streaming
ostream& operator << (ostream& s, const Studiengang& sg)
{
	return s << sg.getBezeichnung() << "  " << sg.getSemester();
}

istream& operator >> (istream& s, Studiengang& z)
{
	string bezeichnung;
	int semester;

	s >> bezeichnung >> semester;
	z = Studiengang(bezeichnung, semester);
	return s;
}
