#include <iostream>

using namespace std;

bool numPerfeito (int x);

int main () {
	int x;
	bool result;


	cout << "Digite um valor: " << endl;
	cin >> x;


	result = numPerfeito (x);

	if (result==true){
		cout << "O numero " << x << " e perfeito" << endl;
	}else{
		cout << "O numero " << x << " nao e perfeito" << endl;
	}


	return 0;
}

bool numPerfeito (int x){
	bool perfeito = true;
	int soma=0;

	for (int i=1; i < x; i ++){
		if (x%i==0){
			soma = soma +i; 
		}
	}

	if (soma == x){
		perfeito=true ;
	}else {
		perfeito=false;
	}

	return perfeito;


}