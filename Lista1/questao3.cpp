#include <iostream>

using namespace std;

int main () {
	int a, b, c, meio;

	cout << "Digite um número: ";
	cin >> a;

	cout << "Digite um número: ";
	cin >> b;

	cout << "Digite um número: ";
	cin >> c;

	cout << a << " " << b <<" "<< c << endl;

	if (a < b && b < c) {
		cout << b << endl;
	} else if (a < b && b > c) {
		cout << a << endl;
	} else {
		cout << c << endl;
	}


	return 0;
}