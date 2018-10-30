#include <iostream>

using namespace std;

int somaInterv (int a , int b);

int main () {
	int a, b, resultado;

	cout << "Digite um valor para A e outro para B: " << endl;
	cin >> a >> b;

	resultado = somaInterv (a, b);

	cout << resultado << endl ;




	return 0;
}


int somaInterv (int a, int b){
	int soma =0;

	if (a < b){
		for (int i=a; i<=b; i++){
			soma = soma + i;
		}

	}else{
		for (int i=b; i<=a; i++){
			soma = soma + i;
		}


	}

	return soma;
}
	

