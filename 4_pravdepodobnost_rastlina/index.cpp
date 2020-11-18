#include <iostream>
#include <time.h>

#include "../libs/random.hpp"
using Random = effolkronium::random_static;

using namespace std;

int runExperiments(int x) {
	int success = 0;
	for(int i = 0; i < x; i++) {
		int val = Random::get(0, 1);
		if(val == 1) {
			success++;
		}
	}
	return success;
}

int main() {
	cout << "Budeme pocitat pravdepodobnost rastu semena na rastlinu.\n";
	int output [10] = {0};
	for(int i = 0; i < 400; i++) {
		int result = runExperiments(10);
		output[result]++;
	}
	for(int i: output) {
		cout << i;
		for(int k = 0; k < i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}

