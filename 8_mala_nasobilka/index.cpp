#include <bits/stdc++.h>
#include "../libs/random.hpp"

using namespace std;
using Random = effolkronium::random_static;

const int pocetUloh = 5;
int pocetSpravnych = 0;
string* currentUloha;

string* nahodnaUloha() {
	int firstNum = Random::get(1, 9);
	int secondNum = Random::get(1, 9);
	int operationId = Random::get(0, 3);

	string operationName;
	string vysledok;
	switch(operationId) {
		case 0:
			operationName = "*";
			vysledok = to_string(firstNum * secondNum);
			break;
		case 1:
			operationName = "/";
			vysledok = to_string(firstNum / secondNum);
			break;
		case 2:
			operationName = "+";
			vysledok = to_string(firstNum + secondNum);
			break;
		case 3:
			operationName = "-";
			vysledok = to_string(firstNum - secondNum);
			break;
	}
	string zadanie = to_string(firstNum) + " " + operationName + " " + to_string(secondNum);
	string* c = new string[2];
	c[0] = zadanie;
	c[1] = vysledok;

	return c;
}

int main() {
	string currentVysledok;
	cout << "Vyskusam ta z malej nasobilky...\n";
	for(int i = 0; i < pocetUloh; i++){
		currentUloha = nahodnaUloha();
		cout << currentUloha[0] << "\nVysledok: ";
		cin >> currentVysledok;
		if(currentVysledok == currentUloha[1]) {
			pocetSpravnych++;
		}
	}
	cout << "\n";
	float percenta = (float)pocetSpravnych / (float)pocetUloh * 100;
	cout << "Body: " << pocetSpravnych << "/5\n";
	cout << "Percenta: " << percenta << "%\n";
}

