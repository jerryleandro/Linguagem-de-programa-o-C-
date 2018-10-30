#include <iostream>

using namespace std;

int main () {
	int num, n=0;

	cout << "Digite um número: " << endl;
    cin >> num;

    n=num;

	while (num!=0){
        if (num ==0){
            break;
        }else{
            if (n >= num){
                n = num;
            }
        }


        cout << "Informe um número: " << endl;
        cin >> num;

	}

	cout << "O menor numero e: " << n << endl;

    return 0;
}

