#include <iostream>
#include <ctype.h>

using namespace std;

//char alphabet[] = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"];

string input = "";
string operation = "";

int main () {
	cout << "Tento program zasifruje a desifruje vstup zadany uzivatelom\n";
	cout << "Zadajte vstupny text: ";
	cin >> input;
	cout << "Sifrovat [s] alebo desifrovat [d]?: ";
	cin >> operation;
	if(operation == "s" || operation == "d") {
		for(char& c : input) {
			char shiftedI;
			if(isalpha(c)) {
				if(operation == "s") {
					shiftedI = c + 3;
				} else {
					shiftedI = c - 3;
				}
			} else {
				shiftedI = c;
			}
			cout << shiftedI;
		}
	} else {
		cout << "Nespravny prikaz";
	}

	return 0;
}
