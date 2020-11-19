#include <bits/stdc++.h>

using namespace std;

void print(std::vector <int> const &a) {
   std::cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
}
	
int main() {
	string line;
	string substr;
	int index = 0;
	vector<vector<string>> lines;

	cout << "Nacitam subor a budem vyhodnocovat\n";
	ifstream file ("06.txt");
	if(file.is_open()) {
		while(getline(file, line)) {
			istringstream iss(line);
			do {
				string subs;
				iss >> subs;
				lines[index].push_back(subs);
			} while (iss);
			index++;
		}
	}
	for ( const std::vector<string> &v : lines ) {
  	for ( string x : v ) std::cout << x << ' ';
  	std::cout << std::endl;
	}
}


//int main() {
	//char str[] = "Geeks-for-Geeks";
	//char *token = strtok(str, "-");

	//while (token != NULL) {
		//cout << token <std::< "\n";
		//token = strtok(NULL, "-");
	//}
//}
