#include"Formula.h"
#include"GrandPrix.h"
#include"Vozaci.h"
#include<iostream>
#include<string>
using namespace std;

int main() {

	Vozaci* V[] = { new Formula("Mercedes","Siva"), new GrandPrix("Barcelona","Spain") };
	cout << "Vozac: " << V.GetIme();


	system("pause");
	return 0;
}