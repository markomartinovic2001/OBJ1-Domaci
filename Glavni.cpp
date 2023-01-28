#include<iostream>
#include<string>
#include"Formula.h"
#include"GrandPrix.h"
#include"Vozac.h"
#include<stack>
#include<list>
#include<algorithm>
#include<queue>

using namespace std;

class Brojevi {
public:
	int prirodni;
	double realni;
public:
	Brojevi(int pr = 0, double real = 0)
		:
		prirodni(pr),
		realni(real)
	{}
	friend Brojevi operator+
		(Brojevi, Brojevi);
};
Brojevi operator+(Brojevi c1, Brojevi c2)
{
	return Brojevi(c1.prirodni + c2.prirodni,
		c1.realni + c2.realni);
}

int main() {

	const Vozac V("George Russel ");
	V.GetImePrezime();
	const Formula F(" - Mercedes, ");
	F.GetModel();
	const GrandPrix GP("Barcelona (Spain)");
	GP.GetDrzava();
	cout << "Ime, prezime, formula i trka: " << endl;
	cout << endl;
	cout << V.GetImePrezime();
	cout << F.GetModel();
	cout << GP.GetDrzava();
	cout << endl;
	const Vozac V1("Lewis Hamilton ");
	V.GetImePrezime();
	const Formula F1(" - Mercedes, ");
	F.GetModel();
	const GrandPrix GP1("Monte-Carlo (Monaco)");
	GP.GetDrzava();
	cout << V1.GetImePrezime();
	cout << F1.GetModel();
	cout << GP1.GetDrzava();
	cout << endl;
	const Vozac V2("Charles Leclerc ");
	V.GetImePrezime();
	const Formula F2(" - Ferrari, ");
	F.GetModel();
	const GrandPrix GP2("Miami (USA)");
	GP.GetDrzava();
	cout << V2.GetImePrezime();
	cout << F2.GetModel();
	cout << GP2.GetDrzava();
	cout << endl;
	const Vozac V3("Carlos Sainz ");
	V.GetImePrezime();
	const Formula F3(" - Ferrari, ");
	F.GetModel();
	const GrandPrix GP3("Imola (Italy)");
	GP.GetDrzava();
	cout << V3.GetImePrezime();
	cout << F3.GetModel();
	cout << GP3.GetDrzava();
	int broj = V.GetBrVozaca();
	cout << endl;
	cout << endl;

	cout << "Ukupan broj vozaca:" << broj << endl;
	cout << endl;
	cout << endl;


	cout << "Brojevi vozaca: " << endl;
	cout << endl;
	stack<Brojevi> stek;
	stek.push(*new Brojevi(55));
	stek.push(*new Brojevi(16));
	stek.push(*new Brojevi(44));
	stek.push(*new Brojevi(63));

	while (!stek.empty())
	{
		cout << stek.top().prirodni;
		stek.pop();
		cout << endl;
	}

	cout << endl;
	cout << endl;

	pair<Vozac, string> parovi(Vozac("Michael Schumacher"), "Marko Martinovic RT-72/20");
	cout << "Pair struktura sa objektom tipa Vozac i stringom" << endl << endl;
	cout << "Objekat i vrednosti: " << parovi.first.GetImePrezime() << ", " << parovi.second << endl;
	cout << endl;
	cout << endl;


	//KLASA LIST

	list<string> lista1 = { "Max Verstappen", "Daniel Ricciardo", "Lando Norris", "Sergio Perez" };

	lista1.push_front("Nicolas Latifi");
	lista1.push_back("Fernando Alonso");

	list<string>::iterator it = find(lista1.begin(), lista1.end(), "Fernando Alonso");

	if (it != lista1.end()) {
		lista1.insert(it, "Pierre Gasly");
	}

	for (string n : lista1) {
		cout << n << '\n';
	}

	cout << endl;

	

	//KLASA QUEUE

	queue<int> myqueue;
	int myint;
		cout << "Unesite cele brojeve (0 je za kraj):" << endl;
	do {
		cin >> myint;
		if (myint) myqueue.push(myint);
	} while (myint);
		cout << "myqueue obrada: ";
	while (!myqueue.empty())
	{
		cout << ' ' << myqueue.front();
		myqueue.pop();
	}
	cout << '\n';



	system("pause");
	return 0;
}