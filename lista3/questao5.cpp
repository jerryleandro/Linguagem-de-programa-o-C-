#include <iostream>

using namespace std;

int main () {
int altura_y, largura_x, origem_x, origem_y, ponto_x, ponto_y;

cout << "Digite um valor para a origem X do retângulo" << endl;
cin >> origem_x;
cout << "Digite um valor para a origem Y do retângulo" << endl;
cin >> origem_y;

cout << "Digite um valor para a altura" << endl;
cin >> altura_y;
cout << "Digite um valor para a largura" << endl;
cin >> largura_x;

cout << "Digite um valor para um ponto - X " << endl;
cin >>ponto_x;
cout << "Digite um valor para um ponto - Y" << endl;
cin >> ponto_y;


if ((ponto_x >= origem_x)&& (ponto_x <= largura_x)){
    if ((ponto_y >= origem_y) && (ponto_y <= altura_y)){
        cout << "O ponto" << "( " << ponto_x << ", " << ponto_y << ") " << "esta dentro" ;
    }
}else{
    cout << "O ponto" << "( " << ponto_x << ", " << ponto_y << ") " << "esta fora" ;
    }

return 0;
}
