#include <iostream>

using namespace std;
 
int main() {
	char codigo;
	int preco;
	float desconto; 

	cout << "Digite um código: ";
	cin >> codigo;

	cout << "Digite o preço: ";
	cin >> preco;



	switch (codigo){
		case 'f':
			if (preco > 500){
				desconto = (preco * 10)/100;
			}else{
				desconto = (preco * 5)/100;
			}

			preco = (preco - desconto);

			cout << "O preco do fogão com desconto: " <<  preco << endl;

			break;

		case 'g':
			if (preco > 2000){
				desconto = (preco * 30)/100;
			}else if (preco >= 1000 && preco <=2000 ){
				desconto = (preco * 20)/100;
			}else{
				desconto = (preco *10)/100;
			}

			preco = (preco - desconto);

			cout << "O preco do geladeira com desconto: " <<  preco  << endl;

			break;


		default:
		 	cout << "Código inválido" << endl;


	}


	return 0;
}

