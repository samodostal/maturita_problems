#include <bits/stdc++.h>

using namespace std;

float lowest = 1000;
float xCache;

float testPoly(float x) {
	return (x*x*x) + (2 * x) - 1;
}

int main() {
	for(int i = 0; i <= 1000; i++) {
		float x = i / 1000.0f;
		float diff = testPoly(x);
		if(lowest > diff && diff > 0) {
			lowest = diff;
			xCache = x;
		}
	}
	cout << "Lowest number: " << xCache << "\nWith diff: " << lowest << "\n";
}
