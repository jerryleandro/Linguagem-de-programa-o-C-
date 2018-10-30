#include <iostream>

using namespace std;

int maximo (int a, int b, int c);

int main () {
	int a, b, c, resul;

	cout << "Digite valores para x, b e c: " << endl;
	cin >> a>> b>> c;

	resul = maximo (a, b, c);

	cout << resul << endl;


	return 0;
}


int maximo (int a , int b, int c){

	if ((a > b) && (a > c)){
		return a;
	}else if ((b > a ) && (b > c)){
		return b;
	}else{
		return c;
	}



}