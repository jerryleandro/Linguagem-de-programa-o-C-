#include <iostream>

using namespace std;

int inverteNumero (int a);
int maiorInvertido (int a, int b);
int main (){
    int a, b, resultado;

    cout << "Digite valores para X e Y: " << endl;
    cin >> a  >> b;

    resultado = maiorInvertido (a, b);

    cout << "O maior numero e: " << resultado << endl;

    return 0;
}

int maiorInvertido (int a, int b){
    int resultA, resultB;
    bool resultFinal=true;

    resultA = inverteNumero (a);
    resultB = inverteNumero (b);

    if (resultA > resultB){
        resultFinal;
    }else{
        resultFinal=false;
    }

    return resultFinal;

}




int inverteNumero (int a){
    int numero=0, div;
    while (a!=0) {
        div = a%10;
        numero = (numero*10) + div;
        a = a / 10;
    }

    return numero;

}
