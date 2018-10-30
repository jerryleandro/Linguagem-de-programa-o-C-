#include <iostream>

using namespace std;

void listaPrimo (int&, int&);
bool ehPrimo (int&);

int main (){
    int x, y;

    cout << "Digite um valor para X e outro para Y: " << endl;
    cin >> x >> y;

    listaPrimo (x, y);

    return 0;
}



void listaPrimo (int& x, int& y){
    if (x < y){
        for (int i=x; i<=y; i++){

            if (ehPrimo(i)){
                cout << "O numero " << i << " e primo" << endl;
            }else{
                cout << "O numero " << i << " nao e primo" << endl;
            }

        }

}	else{
        for (int i=y; i<=x; i++){
            if (ehPrimo(i)){
                cout << "O numero " << i << " e primo" << endl;
            }else{
                cout << "O numero " << i << " nao e primo" << endl;
            }
        }
    }

}


bool ehPrimo (int& n){
    bool primo = true;
    for (int i=2; i<n; i++){
        if (n%i==0){
            primo=false;
        }
    }
    return primo;
}


