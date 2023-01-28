#include"Vozac.h"
#include"Formula.h"
#include<iostream>
#include<string>
using namespace std;


Formula::Formula() {
	model = "Mclaren";
}

Formula::Formula(string m) {
	model = m;
}

string Formula::GetModel() const {
	
	return model;
}

