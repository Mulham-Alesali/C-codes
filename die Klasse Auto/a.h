/*
Mulham Alesali
19.12.2018
a.h
*/
#pragma once
#include <iostream>

using namespace std;

class Studiengang
{
	//class attribute
private:
	string Bezeichnung;
	int Semester;

public:
	//class constructors

	Studiengang(const string Bezeichnung = "Uknown", const int Semester = 6);
	Studiengang(const Studiengang &kt);
	~Studiengang() { }

	//class getters and setters
	void setBezeichnung(string Bezeichnung);
	string getBezeichnung() const { return Bezeichnung; }

	void setSemester(int Semester);
	int getSemester() const { return Semester; }

	friend ostream& operator << (ostream& s, const Studiengang& sg);
	friend istream& operator >> (istream& s, Studiengang& sg);

};
