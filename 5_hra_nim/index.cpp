#include <iostream>
#include "../libs/random.hpp"

using std::cout;
using std::cin;
using std::string;
using Random = effolkronium::random_static;

string first;
int count = 17;
int tah;

int winning [] = { 0, 1, 5, 9, 13 };

int randomTah() {
	int response = Random::get(1, 3);
	return response;
}

int main() {
	cout << "Na kope leží 17 zápaliek. Dvaja hráči striedavo berú z kopy buď jednu, alebo dve, alebo tri zápalky. Kto musí zobrať poslednú zápalku, prehráva.\n";
	cout << "Zacat [z] alebo ist druhy [d]: ";
	cin >> first;

	cout << "Zaciatok hry:" << count << "\n";

	if(first == "z") {
		cout << "Tvoj tah: ";
		cin >> tah;
		if(tah > 3 || tah < 1) {
			cout << "S podvodnikmi nehram!!!\n";
			return 0;
		}
		count = count - tah;
	}

	while(count > 0) {
		int nearestWinning;
		for(int i: winning) {
			for(int k = 1; k < 5; k++) {
				if(count - k == i) {
					nearestWinning = i;
				}
			}
		}
		int rozdiel = count - nearestWinning;
		int pocitacTah;
		if(rozdiel <= 3) {
			pocitacTah = rozdiel;
		} else {
			pocitacTah = randomTah();
		}
		count = count - pocitacTah;

		cout << "Tah pocitaca: " << pocitacTah << "   [" << count << "]\n";
		cout << "Tvoj tah: ";
		cin >> tah;
		if(tah > 3 || tah < 1) {
			cout << "S podvodnikmi nehram!!!\n";
			return 0;
		}
		count = count - tah;
	}
}

