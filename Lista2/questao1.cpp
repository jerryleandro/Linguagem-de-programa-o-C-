#include <iostream>


using namespace std;

int main () {
	int n, n2, soma=0;
	float media=0;



	cout << "Digite um número :" << endl;
	cin >> n;


	for (int i=0; i<n ; i++){
		cout << "Digite um número: " << endl;
		cin >> n2;

		soma = soma + n2;
	}


	media = (soma / n);
	cout << media << endl;


	return 0;
}