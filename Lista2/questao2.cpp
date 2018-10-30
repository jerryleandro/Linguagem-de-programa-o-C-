#include <iostream>

using namespace std;

int main () {

	int n, div;
	bool primo = true;

	cout << "Digite um número: " << endl;
	cin >> n;


	if (n==1 || n==0){
		primo=false;
	}

	for (int i=2; i<n; i++){
		div = n/i;

		if (n%i==0){
			primo = false;
			break;
		}

	}

	if (primo){
		cout << "O número "<< n << " " << " e primo";
	}else{
		cout << "O numero " << n << " " << " nao e primo ";
	}
}