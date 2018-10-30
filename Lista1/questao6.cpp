#include <iostream>

using namespace std;

int main () {
int n, c, d, u, resto, aux;


cout << "Digite um número" << endl;
cin >> n;

resto = (n%1000);
c = (resto/100);
d = ((resto%100)/10);
aux = (resto%10);
u = (aux%10);

cout << u << " " << d << " "<< c ;
return 0;
}