#include"Vozac.h"
#include<iostream>
#include<string>
using namespace std;

int Vozac::BrVozaca = 0;

Vozac::Vozac() {

	ImePrezime = "Ayrton Senna";
}

Vozac::Vozac(string imep) {

	this->ImePrezime = imep;
	BrVozaca++;
}

string Vozac::GetImePrezime() const {
	
	return ImePrezime;
}

int Vozac::GetBrVozaca() {

	return BrVozaca;
}

void Vozac::Izmeni(string i) { // ??!?!?!?!?!?!?

	this->ImePrezime = i;
}
