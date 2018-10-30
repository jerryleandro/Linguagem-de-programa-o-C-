#include <iostream>

using namespace std;

void calcHora (int& s, int& m, int& h);

int main () {
    int s, m, h;


    cout << "Digite um valor correspondente a segunos: " << endl;
    cin >> s;

    calcHora (s, m , h);

    cout << h << " horas " << m << " minutos e " << s << " segundos " << endl;



    return 0;
}


void calcHora (int& s, int& m, int& h){

    h= s/3600;
    m = (s/60)%60;
    s = s - (h*3600 + m*60);

}
