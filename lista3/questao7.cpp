#include <iostream>

using namespace std;

void converter (int& );

int main () {
	int s;

	cout << "Digite um valor correspondente em segudos: " << endl;
	cin >> s;
	converter(s);
	return 0;
}

void converter (int& x){
	int horas, segundos, minutos;

	horas = x/3600;
	minutos = ((x/60)%60);
	segundos = x - (horas*3600 + minutos*60);
	cout<<horas<<" horas "<<minutos<<" minutos "<<segundos<<" segundos\n";
}