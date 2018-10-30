#include <iostream>


using namespace std;


int main() {
	float nota1, nota2, nota3, media;


	cout << "digite a primeira nota: ";
	cin >> nota1;

	cout << "digite a segunda nota: ";
	cin >> nota2;

	cout << "Digite a terceira nota: ";
	cin >> nota3;

	media = (nota1 + nota2 + nota3)/3;

	if (media >= 5 && nota1 >= 3 && nota2 >= 3 && nota3 >= 3) {
		cout << "Aprovado" << endl;
	} else if (media >= 3) {
		cout << "Final" << endl;
	} else {
		cout << "Reprovado" << endl;
	}
	
	return 0;
}