#include <iostream>
#include "19_zlomok.h"

using namespace std;

int main(int argc, char *argv[])
{
	Zlomok a(3,0);
	Zlomok b(1,2), c(1,3);
	a = b + c;
	c = a - Zlomok(5,6);
	b /= c; 
	cout << b;
}
