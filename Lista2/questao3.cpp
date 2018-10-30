#include <iostream>

using namespace std;

int main () {

    int x, y, resul;
    float axl;


    cout << "Digite um valor para X : " << endl;
    cin >> x;

    cout << "Digite um valor para Y: " << endl;
    cin >> y;

    if (y>0) {

        for(int i=1; i<y ; i++){
            x = x*x;
        }
        cout << x << endl;
    } else {
        y = y * -1;
        for(int i=1; i< y ; i++){
            resul = x*x;
        }
        axl = 1.0 / resul;
        cout << axl << endl;
    }

    return 0;
}