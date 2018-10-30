#include <iostream>

using namespace std;

int somaFat (int x, int y);
int fatorial (int n);

int main () {
	int x, y, resultado;

	cout << "Digite um valor para x e outro para y: " << endl;
	cin >> x >> y;

	resultado = somaFat (x, y);

	cout << resultado << endl;

	return 0;
}



int fatorial (int n){
	int mult=1;

	for (int i=n; i>=1; i--){
		mult= mult*i;
	}

	return mult;
}


int somaFat (int x, int y){
	int soma, fatX, fatY;
	fatX = fatorial(x);
	fatY = fatorial(y);
	soma = fatX + fatY;
	return soma;
}