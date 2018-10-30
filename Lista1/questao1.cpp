#include <iostream>

using namespace std;

int main () {
	int a, b , c, soma;
	float media;

	cout << "Digite um valor para A , B e C " << endl ;
	cin >> a >> b >> c;

	soma = a + b+ c;
	media = (float)soma/3;

	cout << "Media " << media << endl;


	return 0;
}