#include <iostream>

using namespace std;

int divisao (int x, int y, int& q, int& r);

int main () {
    int x, y, q, r;

    cout << "Digite um valor para X e outro para Y: " << endl;
    cin >> x >> y;

    divisao (x, y, q, r);

    cout << "Quociente = " << q << " , resto = " << r << endl;


    return 0;
}



int divisao (int x, int y, int& q, int& r){
    q = x/y;
    r=x%y;

}
