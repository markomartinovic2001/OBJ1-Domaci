#pragma once
#include"Vozac.h"
#include<string>
#include<iostream>
using namespace std;

class Formula : public Vozac { //nasledjivanje klase vozac
private:
	string model;
public:
	Formula();
	Formula(string);
	string GetModel() const;

};