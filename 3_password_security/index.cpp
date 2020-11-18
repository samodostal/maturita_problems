#include <iostream>
using namespace std;


int main() {
	string password;
	bool hasLower = false;
	bool hasUpper = false;
	bool hasNumber = false;

	cout << "Ideme overovat kvalitu hesla.\nZadajte heslo: ";
	cin >> password;

	if (password.length() > 12 || password.length() < 5) {
		cout << "Nespravna dlzka hesla. Ukoncujem program.";
		return 0;
	}
	for(char& c : password) {
		if(!hasLower && islower(c)) hasLower = true;
		if(!hasUpper && isupper(c)) hasUpper = true;
		if(!hasNumber && isdigit(c)) hasNumber = true;
	}
	if(!hasLower || !hasUpper || !hasNumber) {
		cout << "Heslo nevyhovuje poziadavkom";
		return 0;
	}
	if(password.find("123") != string::npos) {
		cout << "Heslo nesmie obsahovat podretazes 123";
		return 0;
	}
	cout << "Heslo preslo vsetkymi testami. Ukoncujem program.";
	return 0;
}
