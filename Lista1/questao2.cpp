#include <iostream>

using namespace std;

int main () {
	int s, segundos, horas, minutos;

	cout << "Digite um valor correspondente a segundos: " << endl;
	cin >> s;

	horas = s/3600;
	minutos= ((s/60)%60);
	segundos = s - (horas*3600 + minutos*60);

	cout << horas << " horas (s)" << " , " << minutos << " minutos (s)" << " e " << segundos << " segundos " << endl; 


	return 0;
}