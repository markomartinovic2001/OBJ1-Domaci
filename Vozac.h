#pragma once
#include<string>
using namespace std;

class Vozac {
private:
	string ImePrezime;
protected:
	static int BrVozaca; //staticki clan
public:
	Vozac();
	Vozac(string);
	string GetImePrezime() const; //inspektor
	static int GetBrVozaca(); //staticka metoda
	void Izmeni(string); //mutator ?!?!?!?!?!
};