#include"GrandPrix.h"
#include<iostream>
#include<string>
using namespace std;

GrandPrix::GrandPrix() {
	Drzava = "Monte-Carlo, Monaco";
}
GrandPrix::GrandPrix(string d) {
	Drzava = d;
}
string GrandPrix::GetDrzava() const {
	return Drzava;
}