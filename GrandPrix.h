#pragma once
#include<string>
#include<iostream>
using namespace std;

class GrandPrix {
private:
	string Drzava;
public:
	GrandPrix();
	GrandPrix(string);
	string GetDrzava() const;
};